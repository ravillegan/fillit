/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:20:35 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/11 19:05:40 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *a;
	const unsigned char *b;

	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	while (n--)
		if (*a != *b)
			return (*a - *b);
		else
		{
			a++;
			b++;
		}
	return (0);
}
