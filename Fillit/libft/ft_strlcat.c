/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:17:12 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:17:14 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		freeplace;
	size_t		dlen;

	d = dst;
	s = src;
	freeplace = dstsize;
	while (freeplace-- && *d)
		d++;
	dlen = d - dst;
	freeplace = dstsize - dlen;
	if (freeplace == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (freeplace != 1)
		{
			*d++ = *s;
			freeplace--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
