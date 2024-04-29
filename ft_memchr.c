/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:12:37 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 22:30:26 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*point;
	unsigned char		chr;

	point = s;
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
char) in the first n bytes of the object pointed to by s.


F u n c t i o n   P r o c e s s :

We declare two variables, *point, which is a pointer to the memory block and
chr, which is the character to search for. We set point to s and chr to c. 
For chr we specify the type as an unsigned char.

We then iterate through the memory block pointed to by point until we reach the
end of the block or until we find the character to search for.

If we find the character to search for, we return the pointer to the memory
block that contains the character. Otherwise, we return NULL.

Variable Setup:

    point: This is a pointer to const unsigned char initialized to hold s after casting it. This ensures we treat the memory pointed to by s as a sequence of constant (read-only) unsigned characters (bytes).
    chr: An unsigned char variable initialized by casting c. This converts the integer c to its corresponding unsigned character representation.

Looping and Searching:

    The function uses a while loop with two conditions:
        n-- > 0: This pre-decrement loop condition ensures n is decremented before each iteration and the loop continues as long as n is greater than 0. This effectively sets the loop to iterate n times.
        *point == chr: This condition checks if the current byte pointed to by *point is equal to the character chr we're searching for.

Returning on Match:

    Inside the loop:
        If the condition *point == chr is true, it means we found the character chr at the current memory location pointed to by point.
            In this case, the function immediately returns a pointer cast to void*: ((void *)point). This pointer points to the location where the matching character was found in the memory block.

Moving the Pointer:

    If the character is not found (*point != chr), the loop continues:
        point++: The pointer point is incremented by 1. This moves it to the next byte in the memory block for the next iteration.

Returning NULL on No Match:

    After the loop completes (all n bytes have been iterated through), if no match was found, the function returns NULL. This indicates that the character chr was not present within the specified n bytes of the memory block.
	
*/