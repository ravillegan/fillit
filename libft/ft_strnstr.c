/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:00:19 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 16:36:13 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	char	*tmp;
	char	*tmp2;
	size_t	l;

	if (!(*n))
		return ((char *)h);
	while (*h && len)
	{
		tmp = (char *)h;
		tmp2 = (char *)n;
		l = len;
		while (*h && *tmp2 && *h == *tmp2 && l)
		{
			h++;
			tmp2++;
			l--;
		}
		if (!(*tmp2))
			return (tmp);
		len--;
		h = tmp + 1;
	}
	return (NULL);
}
