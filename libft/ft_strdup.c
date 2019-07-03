/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:22:06 by asantiag          #+#    #+#             */
/*   Updated: 2019/06/01 12:34:16 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int			len;
	char		*s2;
	char		*tmp;
	const char	*tmp2;

	len = 0;
	tmp2 = s1;
	while (*tmp2++)
		len++;
	if (!(s2 = (char *)malloc(len + 1)))
		return (0);
	tmp = s2;
	while (len--)
		*tmp++ = *s1++;
	*tmp = '\0';
	return (s2);
}
