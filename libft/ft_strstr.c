/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:31:50 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 17:22:43 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*tmp;
	char	*tmp2;

	if (!(*needle))
		return ((char *)haystack);
	while (*haystack)
	{
		tmp = (char *)haystack;
		tmp2 = (char *)needle;
		while (*haystack && *tmp2 && *haystack == *tmp2)
		{
			haystack++;
			tmp2++;
		}
		if (!(*tmp2))
			return (tmp);
		haystack = tmp + 1;
	}
	return (0);
}
