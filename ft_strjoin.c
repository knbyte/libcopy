/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:14:59 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:12:48 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, s1_len + 1);
	ft_strlcpy(result + s1_len, s2, s2_len + 1);
	return (result);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

Allocates (with malloc(3)) and returns a new string, which
is the result of the concatenation of ’s1’ and ’s2’.

If the allocation fails, the function returns NULL.

F u n c t i o n   P r o c e s s :

- Variable Setup
	- result: stores address of the string holding the concatenation of s1/s2.
    - s1_len: stores the length of the string s1 found using ft_strlen.
    - s2_len: stores the length of the string s2 found using ft_strlen.

- Memory Allocaxtion
    - calculates the total space required for the concatenated string by adding
		s1_len, s2_len, and 1 (for the null terminator).
    - Uses malloc to allocate memory of this size and casts the returned pointer
		to char* for compatibility.
    - If malloc fails to allocate memory, the function returns NULL.

- Safe Concatenation with ft_strlcpy
    - The function uses ft_strlcpy twice to perform safe concatenation:
        - The first call copies the contents of s1 into the beginning of the
			newly allocated result string. The size limit passed to ft_strlcpy is
			s1_len + 1 to ensure null termination for the copied s1 content.
        - The second call copies the contents of s2 starting from the position
			result + s1_len. This effectively appends s2 after s1 in the result
			string. The size limit passed to ft_strlcpy in this call is
			s2_len + 1 for similar reasons.

- Return Result
	- After successful concatenation, the function returns the pointer result
		which points to the newly allocated string containing the combined
		content of s1 and s2.
*/