/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:00:48 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/22 18:44:47 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*maxlong(void)
{
	char	*s;

	if (!(s = malloc(sizeof(char) * 20)))
		return (NULL);
	s = ft_strcpy(s, "9223372036854775808");
	return (s);
}

static int	strcheck(const char *str, int i, int res, int fl)
{
	char	*maxl;
	size_t	len;

	len = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		len++;
		i++;
	}
	i = i - len;
	if (!(maxl = maxlong()))
		return (0);
	str += fl > 0 ? 0 : 1;
	if ((len == 19 && ft_strncmp(maxl, str, len) <= 0) || len > 19)
	{
		if (fl > 0)
			return (-1);
		else
			return (0);
	}
	str -= fl > 0 ? 0 : 1;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + str[i++] - '0';
	return (res);
}

int			ft_atoi(const char *str)
{
	int res;
	int fl;
	int i;

	res = 0;
	fl = 1;
	i = 0;
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-' || str[i] == '+')
			break ;
		if (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12
				|| str[i] == 13 || str[i] == 32)
			i++;
		else
			return (0);
	}
	if (str[i] == '-')
		fl = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	res = strcheck(str, i, res, fl);
	return (res * fl);
}
