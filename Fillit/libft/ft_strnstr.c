/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:19:07 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:19:08 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *substring;

	substring = ft_strstr(haystack, needle);
	if ((substring + ft_strlen(needle)) <= (haystack + len))
		return (substring);
	return (NULL);
}
