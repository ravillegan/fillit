/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 00:11:58 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 16:29:04 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	char	*tmp;

	if (!s || !(*f) || !(new = (char *)malloc(ft_strlen(s) + 1)))
		return (0);
	tmp = new;
	while (*s)
		*new++ = f(*s++);
	*new = '\0';
	return (tmp);
}
