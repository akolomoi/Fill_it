/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:47:19 by vikravet          #+#    #+#             */
/*   Updated: 2018/11/27 14:47:31 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void			find_tetrimino_position(const char *tetr_s, char *position)
{
	unsigned char i;

	i = 0;
	position[X_MIN] = 3;
	position[X_MAX] = 0;
	position[Y_MIN] = 3;
	position[Y_MAX] = 0;
	while (i < 20)
	{
		if (tetr_s[i] == '#')
		{
			if (i % 5 < position[X_MIN])
				position[X_MIN] = i % 5;
			if (i % 5 > position[X_MAX])
				position[X_MAX] = i % 5;
			if (i / 5 < position[Y_MIN])
				position[Y_MIN] = i / 5;
			if (i / 5 > position[Y_MAX])
				position[Y_MAX] = i / 5;
		}
		i++;
	}
}

static t_tetrimino	make_tetrimino(const char *tet_str, const char id)
{
	t_tetrimino		tetrimino;
	char			position[4];
	unsigned char	x;
	unsigned char	y;

	tetrimino.value = 0;
	tetrimino.id = id;
	find_tetrimino_position(tet_str, position);
	tetrimino.width = position[X_MAX] - position[X_MIN] + 1;
	tetrimino.height = position[Y_MAX] - position[Y_MIN] + 1;
	y = 0;
	while (y < tetrimino.height)
	{
		x = 0;
		while (x < tetrimino.width)
		{
			if (tet_str[position[X_MIN] + x + (position[Y_MIN] + y) * 5] == '#')
				tetrimino.value |= (1L << (16 * (y + 1) - (x + 1)));
			x++;
		}
		y++;
	}
	return (tetrimino);
}

int					make_tetris(int fd, t_tetrimino *tetris)
{
	char			tetrimino_str[22];
	ssize_t			bytes_read;
	unsigned char	current_id;
	int				i;
	size_t			last_read;

	current_id = 'A';
	i = 0;
	last_read = 0;
	while ((bytes_read = read(fd, tetrimino_str, 21)) >= 20)
	{
		last_read = bytes_read;
		if (!is_tetrimino_valid(tetrimino_str, bytes_read))
			return (0);
		tetris[i] = make_tetrimino(tetrimino_str, current_id++);
		i++;
	}
	if (last_read != 20)
		return (0);
	return (bytes_read == 0 ? current_id - 'A' : 0);
}
