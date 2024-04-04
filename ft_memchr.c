/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:12:37 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/25 18:37:41 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  - s: Pointer to the memory block to search in.
  - c: Character to search for.
  - n: Number of bytes to search within.

  - point: Pointer to iterate through the memory block
  - chr: Variable to hold the character to search for
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*point;
	unsigned char		chr;

	if (s == NULL)
		return (NULL);
	note("Initialize the pointer to point to the start of the memory block");
	point = s;
	chr = (unsigned char)c;
	while (n-- > 0)
	{
		note("While iterating through block, check current buye matches current \
				char, if a match is found, return pointer to current position");
		if (*point == chr)
			return ((void *)point);
		point++;
	}
	note("If the char is not found within the specified # of bytes");
	return (NULL);
}

/*
int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
*/

/*
NAME
    memchr -- locate byte in byte string

LIBRARY
    Standard C Library (libc, -lc)

SYNOPSIS
    #include <string.h>

     void *
    memchr(const void *s, int c, size_t n);

DESCRIPTION
    The memchr() function locates the first occurrence of c (converted to an
    unsigned char) in string s.

RETURN VALUES
    The memchr() function returns a pointer to the byte located, or NULL if
    no such byte exists within n bytes.
*/