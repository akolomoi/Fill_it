/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 17:11:29 by akolomoi          #+#    #+#             */
/*   Updated: 2018/11/27 17:11:47 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	is_neigbor_number_valid(const char *tetrimino_str)
{
	int	i;
	int	neighbors;

	i = 0;
	neighbors = 0;
	while (i < 20)
	{
		if (tetrimino_str[i] == '#')
		{
			if ((i - 1) >= 0 && tetrimino_str[i - 1] == '#')
				neighbors++;
			if ((i + 1) < 20 && tetrimino_str[i + 1] == '#')
				neighbors++;
			if ((i - 5) >= 0 && tetrimino_str[i - 5] == '#')
				neighbors++;
			if ((i + 5) < 20 && tetrimino_str[i + 5] == '#')
				neighbors++;
		}
		i++;
	}
	return (neighbors == 6 || neighbors == 8);
}

int			is_tetrimino_valid(const char *tetrimino, const ssize_t t_size)
{
	int	i;
	int	blocks;

	i = 0;
	blocks = 0;
	while (i < 20)
	{
		if (i % 5 < 4)
		{
			if (!(tetrimino[i] == '#' || tetrimino[i] == '.')
				|| (tetrimino[i] == '#' && ++blocks > 4))
				return (0);
		}
		else if (tetrimino[i] != '\n')
			return (0);
		i++;
	}
	if ((t_size == 21 && tetrimino[t_size - 1] != '\n')
		|| (!is_neigbor_number_valid(tetrimino)))
		return (0);
	return (1);
}
