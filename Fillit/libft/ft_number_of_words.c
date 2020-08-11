/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_of_words.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 22:19:25 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 23:19:33 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_number_of_words(char const *s, char delimiter)
{
	int words;
	int i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != delimiter && ((s[i + 1] == delimiter)
			|| (s[i + 1] == '\0')))
			words++;
		i++;
	}
	return (words);
}
