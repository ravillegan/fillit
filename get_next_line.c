/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 16:52:53 by asantiag          #+#    #+#             */
/*   Updated: 2019/07/03 17:46:43 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillib.h"

int		next_line(char **str, char **line, int fd)
{
	char	*tmp;

	if (ft_strchr(str[fd], '\n'))
	{
		tmp = ft_strdup(ft_strchr(str[fd], '\n') + 1);
		*line = ft_strsub(str[fd], 0, ft_strchr(str[fd], '\n') - str[fd]);
		ft_strdel(&str[fd]);
		str[fd] = tmp;
		return (1);
	}
	else if (str[fd][0])
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
		return (1);
	}
	else
		return (0);
}

int		get_next_line(const int fd, char **line)
{
	static char		*str[10000];
	char			buff[BUFF_SIZE + 1];
	char			*tmp;
	int				ret;

	if (fd < 0 && !line)
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (!str[fd])
			str[fd] = ft_strnew(1);
		tmp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = tmp;
		if (ft_strchr(str[fd], '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	if (!ret && !str[fd])
		return (0);
	return (next_line(str, line, fd));
}
