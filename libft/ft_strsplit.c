/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 13:13:50 by asantiag          #+#    #+#             */
/*   Updated: 2019/05/23 14:31:58 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		wordcount(char const *s, char c)
{
	int i;
	int count;

	i = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	if (s[i - 1] != c)
		count++;
	return (count);
}

static void		arrfree(char **arr, int k)
{
	int i;

	i = 0;
	if (!arr)
		return ;
	while (i < k)
		free(arr[i++]);
	free(arr);
}

static void		arr_init(char **arr, char const *s, char c)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		if (!(arr[k] = (char *)malloc(j - i + 1)))
		{
			arrfree(arr, k);
			return ;
		}
		j = 0;
		while (s[i] != c && s[i])
			arr[k][j++] = s[i++];
		arr[k][j] = '\0';
		k++;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	char	**new;
	int		words;

	if (!s || !c)
		return (NULL);
	if (!(*s))
	{
		if (!(new = (char **)malloc(sizeof(char *))))
			return (NULL);
		new[0] = NULL;
		return (new);
	}
	words = wordcount(s, c);
	if (!(new = (char **)malloc((words + 1) * sizeof(char *))))
		return (NULL);
	arr_init(new, s, c);
	if (!new)
		return (NULL);
	new[words] = NULL;
	return (new);
}
