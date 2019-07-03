/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 00:25:55 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/22 19:20:12 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	char			*tmp;
	unsigned int	i;

	i = 0;
	if (!s || !(*f) || !(new = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	tmp = new;
	while (*s)
	{
		*new++ = f(i, *s++);
		i++;
	}
	*new = '\0';
	return (tmp);
}
