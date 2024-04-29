/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:18:19 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 19:13:10 by emduncan         ###   ########.fr       */
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

- Variable Declaration
    - char *trimmed: Character pointer to store the trimmed string.
    - size_t len: Size of the trimmed string (unsigned long).
    - size_t start: Starting index of the trimmed string (unsigned long).
    - 'size_t end: Ending index of the trimmed string (unsigned long).

- Handle Empty String or Set
    - If s1 or 'set' are NULL, we return NULL.

- Find Starting Index
    - Set 'start' to 0 and loop through 's1 starting at 'start
    - While the current character is not NULL and is present the string 'set'
		(using 'ft_strchr' to check), increment 'start'.
    - This loop skips leading characters in 's1' that are part of the 'set'.

- Find Ending Index
    - Set 'end' to the length of the string 's1' and loop through 's1' starting
		from the end.
    - While the current character is not NULL and is present in the string 'set'
		(using'ft_strchr' to check), decrement 'end'.
    - This loop skips trailing characters in 's1' that are part of the 'set'.

- Calculate Trimmed Length
    - If 'end' is greater than 'start' (meaning there are characters to keep),
		calculate the length as the difference between 'end' and 'start'.
    - Otherwise, if 'end' is not greater than 'start' (meaning all characters are
		in the set), set the length to 0 (resulting in an empty trimmed string).

- Allocate Memory for Trimmed String
    - Allocate memory for the trimmed string using 'malloc' (+1 for null-term).
    - If allocation fails ('malloc' returns NULL), it returns NULL.

- Copy & ReturnTrimmed Substring
    - Copy the substring of 's1' starting at index 'start' and with length 'len'
		into the allocated memory pointed to by 'trimmed'.
    - Return 'trimmed'

*/