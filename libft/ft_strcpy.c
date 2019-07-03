/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:21:54 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/11 19:06:09 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int			len;
	const char	*tmp;
	char		*tmp2;

	len = 0;
	tmp = src;
	while (*tmp++)
		len++;
	tmp2 = dst;
	while (len--)
		*tmp2++ = *src++;
	*tmp2 = '\0';
	return (dst);
}
