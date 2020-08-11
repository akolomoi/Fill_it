/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:17:32 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:17:34 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*output;
	int		i;

	if (!s || !f)
		return (NULL);
	output = ft_strnew(ft_strlen(s));
	if (!output)
		return (NULL);
	i = -1;
	while (s[++i])
		output[i] = f(s[i]);
	return (output);
}
