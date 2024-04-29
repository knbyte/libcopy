/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:24:04 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 19:13:06 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *str, char c)
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

int	get_word_len(char *str, char c)
{
	int	ctr;

	ctr = 0;
	while (str[ctr] != '\0' && str[ctr] != c)
	{
		ctr++;
	}
	return (ctr);
}

char	*allocate_word(char *str, char c)
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

~ N O T E S ~

A b o u t   F u n c t i o n :

Allocates (with malloc(3)) and returns an array of 
strings obtained by splitting 's'using the character 'c' 
as a delimiter. The array must end with a NULL pointer.

F u n c t i o n   P r o c e s s :

count_words
- Iterates through the string using a while loop.
- Skips leading delimiters (c) with a nested while loop.
- Increments a count every time it encounters a non-delimiter character
	- non-delimiter character is the start of a word.
- Returns the final count (number of words) when the string ends.

get_word_len
- Finds the length of the current word.
- Iterates through the string using a while loop.
- Stops when it encounters a delimiter (c) or the null terminator.
- Returns the counter value (length of the word).

allocate_word
- Calls get_word_len to determine word length (excluding delimiter).
- Allocates memory for the word using malloc with size word_len + 1
	(for null terminator).
- Copies characters from the original string to the allocated memory.
- Sets the last character of the allocated memory to the null terminator (\0).
- Returns a pointer to the allocated memory containing the copied word.

freestring
- Takes an array of character pointers (string) and the number of allocated
	elements (ctr) as arguments.
- Frees each individual string allocation using a loop:
    - free(string[ctr++]): Frees the memory pointed to by string[ctr]
		and increments the counter.
- Frees the entire array (string) using free(string).
- Returns NULL.

ft_split
- Returns NULL if the input string is NULL.
- Allocates memory for an array of pointers (sub_strings) to store the
	addresses of substrings, with one extra slot for the null terminator
	(total size: count_words(str, c) + 1).
- Returns NULL if memory allocation for sub_strings fails.
- Iterates through the input string (str) using a while loop:
	- Skips leading delimiters (c) with a nested while loop.
    - If a non-delimiter character is encountered:
		- Calls allocate_word to allocate memory and copy the current word.
        - Stores the returned pointer (address of the copied word)
			in sub_strings[ctr1].
- Error Handling:
  		- Checks for any successful allocations (ctr1 > 0) and for an
			allocation failure (sub_strings[ctr1 - 1] == NULL).
        - If both conditions are true, frees previously allocated
			memory using freestring to prevent leaks.
		- Returns NULL to indicate allocation failure.
	- Skips characters that are not delimiters (c).
- Sets the last element of sub_strings to NULL to mark the end of the array.
- Returns the sub_strings array containing pointers to the extracted substrings.

M a i n   F o r   T e s t i n g : 
*/
/*
#include <stdio.h>

int main(void)
{
	char str[] = "The string should split here ->, here ->, and here ->,.";
	char c = ',';

	char **sub_strings = ft_split(str, c);

	int ctr = 0;

	while (sub_strings[ctr])
	{
		printf("%s\n", sub_strings[ctr]);
		ctr++;
	}
}
*/