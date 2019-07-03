/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 16:17:30 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 16:17:34 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t		len;
	char		*s2;
	char		*tmp;
	const char	*tmp2;

	len = 0;
	tmp2 = s1;
	while (*tmp2++)
		len++;
	if (n < len)
		len = n;
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (0);
	tmp = s2;
	while (len--)
		*tmp++ = *s1++;
	*tmp = '\0';
	return (s2);
}
