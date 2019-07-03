/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:22:11 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 17:22:12 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*arr;

	if (!(arr = (char *)malloc(size + 1)))
		return (0);
	while (size)
	{
		arr[size] = '\0';
		size--;
	}
	arr[0] = '\0';
	return (arr);
}
