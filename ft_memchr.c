/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:12:37 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/30 23:04:09 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *m, int c, size_t n)
{
	unsigned char		*point;
	unsigned char		chr;

	point = (void *)m;
	chr = (unsigned char)c;
	while (n-- > 0)
	{
		if (*point == chr)
			return ((void *)point);
		point++;
	}
	return (NULL);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

memchr stands for "Memory Character Copy"
The memchr function locates the first occurrence of c (converted to an unsigned
char) in the first n bytes of the object pointed to by m.

0
F u n c t i o n   P r o c e s s :

- Variable Setup
    - point: which is a pointer to the memory block and chr
		- we cast it to a pointer type that we can change
    - chr: the character to search for.

- Looping and Searching
    - The function uses a while loop to iterate through the memory block n times.
	- Inside the loop:
		- Dereference so we can check byte by byte
    	- Checks if the current byte is equal to the chr we're looking for. 
        - If found, the function immediately returns a pointer cast to
			void*. This pointer points to the location where chr was found.
		- If not true the loop moves on to the next byte.
    - After the loop completes, if no match was found the function returns NULL.
*/