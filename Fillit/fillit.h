/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:51:30 by vikravet          #+#    #+#             */
/*   Updated: 2018/11/27 14:51:32 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <stdint.h>

typedef struct	s_tetrimino
{
	uint64_t		value;
	unsigned char	id;
	unsigned char	x;
	unsigned char	y;
	unsigned char	width;
	unsigned char	height;
}				t_tetrimino;

enum			e_coordinate
{
	X_MIN, X_MAX, Y_MIN, Y_MAX
};

int				is_tetrimino_valid(const char *tetrimino, const ssize_t t_size);
int				make_tetris(int fd, t_tetrimino *tetris);
int				solve(t_tetrimino *tetris, const int count, uint16_t *map);
void			print(t_tetrimino *ttrs, int tet_number, int m_size);

#endif
