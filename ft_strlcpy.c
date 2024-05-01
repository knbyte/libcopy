/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:06:21 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:12:56 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	srcsize;
	size_t	ctr;

	srcsize = ft_strlen(src);
	ctr = 0;
	if (destsize != 0)
	{
		while (src[ctr] && ctr < (destsize - 1))
		{
			dest[ctr] = src[ctr];
			ctr++;
		}
		dest[ctr] = '\0';
	}
	return (srcsize);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

strlcpy stands for "String Length Copy"
It is a function to copy and concatenate strings.
The strlcpy function copies at most n characters from the string s2 into
the string s1. It returns the length of src, null-terminating the result.

F u n c t i o n   P r o c e s s :

If it is, we sue a while loop which runs as long as we
are counting through the string src and the counter is less than the
destination buffer size. While the loop is running, we increment the
counter by 1, and copy the current character from src to dest.

We null-terminate the string and return the length of src.

- Variable Setup
    - srcsize: stores the length src found using ft_strlen.
    - ctr: tracking of the number of characters copied to the destination
		string dest, initialized to 0.

- Destination Buffer Check
    - The function first checks for space in destsize

- Looping for Character Copying:
    - If destsize has space, the function uses a while loop with two conditions:
        - src[ctr]: checks we are not at the end of the string
        - ctr < (destsize - 1): ensures the counter stays within the safe limit
			of the destination buffer including space for null terminator ( - 1)
    - Inside the loop:
        - Copies character from position in src to corresponding position in dest
        - Increments the counter to move to the next character in both strings

- Null Termination and Return:
	- After loop completes a null terminator is added to the ctr position in dest
    - Returns srcsize
*/