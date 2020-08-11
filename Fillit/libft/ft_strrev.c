/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:07:53 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 15:12:58 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *s)
{
	char *s_end;
	char tempc;

	s_end = s + ft_strlen(s) - 1;
	while (s < s_end)
	{
		tempc = *s;
		*s++ = *s_end;
		*s_end-- = tempc;
	}
}
