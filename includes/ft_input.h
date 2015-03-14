/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfeijoo <cfeijoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/17 19:39:39 by cfeijoo           #+#    #+#             */
/*   Updated: 2015/03/14 20:49:53 by cfeijoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INPUT_H
# define FT_INPUT_H
# define GNL_BUFF_SIZE 128000

typedef struct		s_read
{
	int				size;
	int				index;
	char			*read;
	struct s_read	*next;
}					t_read;

int					get_next_line(int file, char **line);
int					get_stdin_next_line(char **line);
char				ft_getchar(void);

#endif
