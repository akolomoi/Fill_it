/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:19:16 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:37:57 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last_c_occurence;

	last_c_occurence = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last_c_occurence = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (last_c_occurence);
}
