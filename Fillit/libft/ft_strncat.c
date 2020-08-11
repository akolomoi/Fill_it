/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:17:52 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:17:53 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*concatenated;

	concatenated = s1;
	while (*s1)
		s1++;
	while (n-- && *s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (concatenated);
}
