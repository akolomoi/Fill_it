/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:07:53 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:07:58 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	copyn;
	char			*string;

	if (!(string = ft_strnew(ft_numlen(n))))
		return (NULL);
	copyn = n;
	if (n < 0)
		copyn = -n;
	i = 0;
	if (!copyn)
		string[i++] = '0';
	while (copyn > 0)
	{
		string[i++] = copyn % 10 + '0';
		copyn /= 10;
	}
	if (n < 0)
		string[i++] = '-';
	string[i] = '\0';
	ft_strrev(string);
	return (string);
}
