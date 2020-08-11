/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:11:40 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:46:49 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *destination;
	char *source;

	destination = (char *)dst;
	source = (char *)src;
	if (destination > source)
	{
		destination = destination + len - 1;
		source = source + len - 1;
		while (len)
		{
			*destination-- = *source--;
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
