/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:06:29 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/31 11:21:31 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_is_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

static	int	ft_change_sign_to(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int			ft_atoi(const char *str)
{
	char							first_char;
	int								sign_changer;
	unsigned	long	long	int	output;

	sign_changer = 1;
	output = 0;
	while (ft_isspace(*str))
		str++;
	first_char = *str;
	if (ft_is_sign(first_char))
	{
		sign_changer = ft_change_sign_to(first_char);
		str++;
	}
	while (ft_isdigit(*str))
	{
		output = (output * 10) + (*str - 48);
		str++;
	}
	if (output > 9223372036854775807 && sign_changer == -1)
		return (0);
	else if (output > 9223372036854775807)
		return (-1);
	return ((int)(output * sign_changer));
}
