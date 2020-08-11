/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:16:25 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:46:11 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*duplicate;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	duplicate = (char *)malloc(s1_len + 1);
	if (!duplicate)
		return (NULL);
	return (ft_strcpy(duplicate, s1));
}
