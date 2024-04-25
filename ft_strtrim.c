/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:18:19 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/25 18:34:13 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	len;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	if (end > start)
		len = end - start;
	else
		len = 0;
	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + start, len + 1);
	return (trimmed);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

Allocates (with malloc(3)) and returns a copy of 's1' with the characters
specified in 'set' removed from the beginning and the end of the string.


F u n c t i o n   P r o c e s s :

We declare four variables. Trimmed, which is a pointer to the trimmed string,
len, which is the length of the trimmed string, start, which is the starting
index of the trimmed string, and end, which is the ending index of the trimmed
string.

If s1 or 'set' are NULL, we return NULL. We set start to 0.  We then loop through
the string 's1' starting at index 'start' and While the current character is not
NULL and is present in string 'set'(using strchr to check), increment 'start'.

We set the end to the length of the string 's1'. We then loop through the string
's1' starting at index 'end' and While the current character is not NULL
and is present in the string 'set'(using strchr to check), decrement 'end'.

If 'end' is greater than 'start', we set 'len' to the difference between
'end' and 'start'. Otherwise, we set 'len' to 0.

We allocate memory for the trimmed string using malloc(3). If 'trimmed' is NULL,
we return NULL. We copy the substring 's1' starting at index 'start' and ending
at index 'end' into 'trimmed'. We return 'trimmed'.

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	*s1 = "  Hello, World  ";
	char	*set = " ,";
	char	*trimmed;

	trimmed = ft_strtrim(s1, set);
	if (!trimmed)
	{
		printf("Failed to trim string\n");
		return (1);
	}
	printf("Before: %s\n", s1);
	printf("After: %s\n", trimmed);
	free(trimmed);
	return (0);
}
*/