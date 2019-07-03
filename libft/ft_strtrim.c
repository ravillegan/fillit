/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 01:29:01 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 17:11:31 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*trim(char const *s)
{
	char	*start;
	char	*end;
	char	*tmp;
	char	*new;

	start = (char *)s;
	while (*s)
		s++;
	s--;
	while (*s == '\n' || *s == ' ' || *s == '\t')
		s--;
	end = (char *)s;
	if (!(new = (char *)malloc(end - start + 2)))
		return (NULL);
	tmp = new;
	while (start <= end)
		*new++ = *start++;
	*new = '\0';
	return (tmp);
}

char			*ft_strtrim(char const *s)
{
	char	*new;
	char	*tmp;

	if (!s)
	{
		if (!(new = (char *)malloc(1)))
			return (NULL);
		new = NULL;
		return (new);
	}
	while (*s && (*s == '\n' || *s == ' ' || *s == '\t'))
		s++;
	if (!(*s))
	{
		if (!(new = (char *)malloc(1)))
			return (NULL);
		*new = '\0';
		return (new);
	}
	tmp = trim(s);
	return (tmp);
}
