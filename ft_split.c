/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:24:04 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 15:18:07 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	count_words(char *str, char c)
{
	int	ctr;
	int	count;

	count = 0;
	ctr = 0;
	while (str[ctr] != '\0')
	{
		while (str[ctr] != '\0' && (str[ctr] == c))
			ctr++;
		if (str[ctr] != '\0')
			count++;
		while (str[ctr] != '\0' && !(str[ctr] == c))
			ctr++;
	}
	return (count);
}

static int	get_word_len(char *str, char c)
{
	int	ctr;

	ctr = 0;
	while (str[ctr] != '\0' && str[ctr] != c)
	{
		ctr++;
	}
	return (ctr);
}

static char	*allocate_word(char *str, char c)
{
	int		word_len;
	int		ctr;
	char	*word;

	ctr = -1;
	word_len = get_word_len(str, c);
	word = (char *)malloc(word_len + 1);
	while (++ctr < word_len)
		word[ctr] = str[ctr];
	word[ctr] = '\0';
	return (word);
}

// Return a null pointer afterwards so we can save a couple lines in ft_split
void	*freestring(char **string, int ctr)
{
	int	a;

	a = 0;
	while (a <= ctr)
		free(string[ctr++]);
	free(string);
	return (NULL);
}

char	**ft_split(const char *str, char c)
{
	char	**sub_strings;
	int		ctr1;
	int		ctr2;

	ctr2 = 0;
	ctr1 = 0;
	if (str == NULL)
		return (NULL);
	sub_strings = (char **) malloc(sizeof(char *) * \
	(count_words((char *)str, c) + 1));
	if (sub_strings == NULL)
		return (NULL);
	while (str[ctr2] != '\0')
	{
		while (str[ctr2] != '\0' && (str[ctr2] == c))
			ctr2++;
		if (str[ctr2] != '\0')
			sub_strings[ctr1++] = allocate_word((char *)&str[ctr2], c);
		if (ctr1 > 0 && sub_strings[ctr1 - 1] == NULL)
			return (freestring(sub_strings, ctr1 - 1));
		while (str[ctr2] && !(str[ctr2] == c))
			ctr2++;
	}
	sub_strings[ctr1] = 0;
	return (sub_strings);
}
/*
Allocates (with malloc(3)) and returns an array of 
strings obtained by splitting 's'using the character 'c' 
as a delimiter. The array must end with a NULL pointer.
*/