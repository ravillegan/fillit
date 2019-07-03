/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:22:55 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 16:39:47 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *tmp1;
	const unsigned char *tmp2;
	size_t				i;

	i = 0;
	tmp1 = (const unsigned char *)s1;
	tmp2 = (const unsigned char *)s2;
	if (!n)
		return (0);
	while (i < n && tmp1[i] && tmp2[i])
	{
		if (tmp1[i] != tmp2[i])
			break ;
		i++;
	}
	if (i == n)
		i--;
	return (tmp1[i] - tmp2[i]);
}
