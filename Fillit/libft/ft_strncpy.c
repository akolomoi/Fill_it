/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:18:36 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:18:37 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *origdst;

	origdst = dst;
	if (!len--)
		return (origdst);
	while ((*dst++ = *src++))
		if (!len--)
			return (origdst);
	while (len--)
		*dst++ = 0;
	return (origdst);
}
