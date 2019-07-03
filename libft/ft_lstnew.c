/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:31:27 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 15:32:56 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;
	size_t		i;

	i = 0;
	new = NULL;
	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		new->content = NULL;
		new->content_size = 0;
		new->next = NULL;
		return (new);
	}
	if (!(new->content = malloc(content_size)))
		return (NULL);
	while (i <= content_size)
	{
		*(char *)(new->content + i) = *(char *)(content + i);
		i++;
	}
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}
