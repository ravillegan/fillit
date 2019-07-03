/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:15:45 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 16:28:05 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	numsize(int k)
{
	int size;

	size = 0;
	if (k < 0)
		size++;
	while (k / 10)
	{
		size++;
		k /= 10;
	}
	size++;
	return (size);
}

char		*ft_itoa(int n)
{
	char	*fresh;
	int		size;
	int		i;
	int		k;
	int		fl;

	fl = 1;
	i = 0;
	if (!(fresh = (char *)malloc(numsize(n) + 1)))
		return (0);
	if ((size = numsize(n)) && n < 0)
	{
		fresh[0] = '-';
		i++;
		fl = -1;
	}
	k = size;
	while (size - 1 >= i)
	{
		fresh[size - 1] = n % 10 * fl + 48;
		n /= 10;
		size--;
	}
	fresh[k] = '\0';
	return (fresh);
}
