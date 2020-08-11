/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:28:15 by vikravet          #+#    #+#             */
/*   Updated: 2018/11/27 15:28:17 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"

static int	is_not_overlapping(const t_tetrimino *tetris, uint16_t *map)
{
	return (!(*(uint64_t *)(map + tetris->y) & (tetris->value >> tetris->x)));
}

static void	toggle_tetrimino(const t_tetrimino *tetris, uint16_t *map)
{
	*(uint64_t *)(map + tetris->y) ^= tetris->value >> tetris->x;
}

int			solve_map(t_tetrimino *tetris, const int size, uint16_t *map)
{
	if (tetris->id == 0)
		return (1);
	tetris->y = 0;
	while (tetris->y <= size - tetris->height)
	{
		tetris->x = 0;
		while (tetris->x <= size - tetris->width)
		{
			if (is_not_overlapping(tetris, map))
			{
				toggle_tetrimino(tetris, map);
				if (solve_map(tetris + 1, size, map))
					return (1);
				toggle_tetrimino(tetris, map);
			}
			tetris->x++;
		}
		tetris->y++;
	}
	tetris->x = 0;
	tetris->y = 0;
	return (0);
}

int			solve(t_tetrimino *tetris, const int tet_number, uint16_t *map)
{
	int	map_size;

	map_size = 2;
	while (map_size * map_size < tet_number * 4)
		++map_size;
	while (!solve_map(tetris, map_size, map))
	{
		ft_bzero(map, sizeof(uint16_t) * 16);
		++map_size;
	}
	return (map_size);
}
