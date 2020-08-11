/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vikravet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 17:19:25 by vikravet          #+#    #+#             */
/*   Updated: 2018/10/28 17:19:33 by vikravet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	size_t	i;
	size_t	arr_i;
	int		start;
	int		end;
	char	**word_array;

	word_array = NULL;
	i = 0;
	arr_i = 0;
	if (!s || !(word_array =
		(char **)malloc(sizeof(char *) * (ft_number_of_words(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (end > start)
			word_array[arr_i++] = ft_strsub(s, start, end - start);
	}
	word_array[arr_i] = NULL;
	return (word_array);
}
