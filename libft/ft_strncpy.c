/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:21:51 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 17:22:02 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*tmp;

	tmp = dst;
	if (!len--)
		return (dst);
	while ((*tmp++ = *src++))
		if (!len--)
			return (dst);
	while (len--)
		*tmp++ = 0;
	return (dst);
}
