/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:20:39 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/22 18:50:30 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *a;
	char *b;

	a = (char *)src;
	b = (char *)dst;
	if (!n || (!src && !dst) || dst == src)
		return (dst);
	while (n > 0)
	{
		*b = *a;
		a++;
		b++;
		n--;
	}
	return (dst);
}
