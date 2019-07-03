/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:36:15 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 15:36:18 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;
	t_list	*tmp;

	if (!alst || !del)
		return ;
	next = NULL;
	while (*alst)
	{
		tmp = *alst;
		next = tmp->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		*alst = next;
	}
}
