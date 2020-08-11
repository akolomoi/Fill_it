/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:48:15 by akolomoi          #+#    #+#             */
/*   Updated: 2018/11/27 16:48:20 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include "libft/libft.h"
#include "fillit.h"

static int	die(char *str)
{
	ft_putendl(str);
	return (1);
}

int			main(int argc, char **argv)
{
	t_tetrimino	tetris[26 + 1];
	uint16_t	map[16];
	int			tet_number;
	int			map_size;
	int			fd;

	if (argc != 2)
		return (die("usage: ./fillit <input_file>"));
	fd = open(argv[1], O_RDONLY);
	if (!(tet_number = make_tetris(fd, tetris)))
		return (die("error"));
	if (!(map_size = solve(tetris, tet_number, map)))
		return (die("error"));
	print(tetris, tet_number, map_size);
	return (0);
}
