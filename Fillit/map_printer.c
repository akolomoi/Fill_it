/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_printer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 15:31:23 by vikravet          #+#    #+#             */
/*   Updated: 2018/11/27 15:31:25 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"

char	*make_empty_map_str(int size)
{
	char	*str;
	int		x;
	int		y;

	str = ft_strnew(size * (size + 1));
	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size && (str[y * (size + 1) + x] = '.'))
			x++;
		str[y * (size + 1) + x] = '\n';
		y++;
	}
	return (str);
}

void	print(t_tetrimino *ttrs, int tet_number, int m_size)
{
	char	*str;
	int		x;
	int		y;

	str = make_empty_map_str(m_size);
	while (tet_number > 0)
	{
		y = 0;
		while (y < ttrs->height)
		{
			x = 0;
			while (x < ttrs->width)
			{
				if ((ttrs->value >> (16 * (y + 1) - (x + 1))) & 1)
					str[(ttrs->y + y) * (m_size + 1) + ttrs->x + x] = ttrs->id;
				x++;
			}
			y++;
		}
		ttrs++;
		tet_number--;
	}
	ft_putstr(str);
	ft_strdel(&str);
}
