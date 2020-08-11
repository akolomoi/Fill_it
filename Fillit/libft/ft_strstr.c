/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:19:43 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:30:38 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int str_index;
	int to_find_index;

	str_index = 0;
	if (*to_find == '\0')
		return ((char *)str);
	while (str[str_index] != '\0')
	{
		to_find_index = 0;
		while (to_find[to_find_index] == str[str_index + to_find_index])
		{
			if (to_find[to_find_index + 1] == '\0')
				return ((char *)&str[str_index]);
			to_find_index++;
		}
		str_index++;
	}
	return (NULL);
}
