/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:06:21 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 19:03:32 by emduncan         ###   ########.fr       */
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

We delcare a srcsize variable to hold the length of the string src, which we
define as ft_strlen(src). We declare a ctr variable to count the number of 
characters copied into dest which we define as 0.

We check if the destination buffer is large enough to accommodate the
concatenation. If it is, we sue a while loop which runs as long as we
are counting through the string src and the counter is less than the
destination buffer size. While the loop is running, we increment the
counter by 1, and copy the current character from src to dest.

We null-terminate the string and return the length of src.
*/