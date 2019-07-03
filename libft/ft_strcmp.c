/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:21:41 by asantiag          #+#    #+#             */
/*   Updated: 2019/04/11 19:06:06 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	const unsigned char	*tmp1;
	const unsigned char	*tmp2;

	tmp1 = (const unsigned char *)s1;
	tmp2 = (const unsigned char *)s2;
	while (*tmp1 || *tmp2)
		if (*tmp1 != *tmp2)
			return (*tmp1 - *tmp2);
		else
		{
			tmp1++;
			tmp2++;
		}
	return (0);
}
