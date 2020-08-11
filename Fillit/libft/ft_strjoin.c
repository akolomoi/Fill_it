/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:17:04 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:17:05 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *joined;

	if (!s1 || !s2)
		return (NULL);
	joined = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!joined)
		return (NULL);
	ft_strcat(joined, s1);
	ft_strcat(joined, s2);
	return (joined);
}
