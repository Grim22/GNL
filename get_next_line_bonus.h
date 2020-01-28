/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 15:51:24 by bbrunet           #+#    #+#             */
/*   Updated: 2019/11/29 11:08:08 by bbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE
# endif

typedef struct	s_list
{
	int				fd;
	char			*str;
	struct s_list	*next;
}				t_list;

int				get_next_line(int fd, char **line);
int				f_line(char *str);
int				ft_read(char **buf, int fd);
int				ft_len(char *str);
int				ft_cat(char **str, char *buf, int ret);
int				ft_clean(int ret, t_list **begin, t_list **elem, int error);

#endif
