/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:17:41 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:17:42 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*output;
	int		i;

	if (!s || !f || !(output = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = -1;
	while (s[++i])
		output[i] = f(i, s[i]);
	return (output);
}
