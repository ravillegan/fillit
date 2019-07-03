/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:21:01 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/22 18:49:31 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!len || (!src && !dst))
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d > s)
		while (len--)
			*(d + len) = *(s + len);
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}
