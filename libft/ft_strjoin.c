/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 01:14:07 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 16:41:35 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	char	*tmp;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (len + 1 == 0)
		return (NULL);
	arr = (char *)malloc(len + 1);
	if (!arr)
		return (NULL);
	tmp = arr;
	while (*s1)
		*arr++ = *s1++;
	while (*s2)
		*arr++ = *s2++;
	*arr = '\0';
	return (tmp);
}
