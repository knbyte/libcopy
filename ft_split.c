/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:24:04 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:39:13 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Counts the number of words in the input string 's' based on the delimiter 'c'.
*/
static size_t	count_words(char const *s, char c)
{
	size_t	num_words;
	size_t	ctr;

	num_words = 0;
	ctr = 0;
	while (s[ctr])
	{
		note("Skip leading delimiter characters");
		while (s[ctr] && s[ctr] == c)
			ctr++;
		note("Increment word cnt if a non-delimiter character is encountered");
		if (s[ctr])
			num_words++;
		note("Move to the next word");
		while (s[ctr] && s[ctr] != c)
			ctr++;
	}
	return (num_words);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		word_len;
	int		i;

	i = 0;
	arr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !arr)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c) == NULL)
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			arr[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	arr[i] = NULL;
	return (arr);
}

/*
Allocates (with malloc(3)) and returns an array of 
strings obtained by splitting 's'using the character 'c' 
as a delimiter. The array must end with a NULL pointer.
*/