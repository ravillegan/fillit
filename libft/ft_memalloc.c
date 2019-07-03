/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:05:22 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/11 19:05:23 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char *arr;
	char *tmp;

	if (!(arr = (char *)malloc(size)))
		return (0);
	tmp = arr;
	while (size--)
		*tmp++ = '\0';
	return (arr);
}
