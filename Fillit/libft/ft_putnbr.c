/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:13:34 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:13:35 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, 1);
}

/*
** Failes moulitest
** EXP: 01-1123001...
** MY_: 01-01123001...
** if (n < 0)
** {
** 	ft_putchar('-');
** 	ft_putnbr(-(n / 10));
** 	ft_putchar(-(n % 10) + '0');
** }
** else
** {
** 	if (n / 10 != 0)
** 		ft_putnbr(n / 10);
** 	ft_putchar(n % 10 + '0');
** }
*/