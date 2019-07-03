/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asantiag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 17:46:18 by asantiag          #+#    #+#             */
/*   Updated: 2019/07/03 17:46:19 by asantiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "./libft/libft.h"
# define BUFF_SIZE 10

typedef struct	s_tetr
{
	int len;
	int wid;
	char mas[4][4];
}				t_tetr;


int		get_next_line(const int fd, char **line);

#endif
