/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:39:16 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 15:40:35 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	listfree(t_list *head)
{
	t_list	*tmp;

	while (head)
	{
		head->content = NULL;
		head->content_size = 0;
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*next;

	if (!lst || !f)
		return (NULL);
	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new = f(lst);
	tmp = new;
	lst = lst->next;
	while (lst)
	{
		next = f(lst);
		if (!next)
		{
			listfree(tmp);
			return (NULL);
		}
		new->next = next;
		new = new->next;
		lst = lst->next;
	}
	return (tmp);
}
