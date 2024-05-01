/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:13:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:12:18 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *m, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)m;
	while (n-- > 0)
		*ptr++ = (unsigned char)c;
	return (m);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

memset stands for "Memory Set"
The memset function sets the first n bytes of the string s to c,
converted to an unsigned char.s
It does this by taking three arguments, s, c, and n.


F u n c t i o n   P r o c e s s :

- Variable Setup
    - ptr: points to the beginning of the memory block.
		(Using a cast to make certain we access one byte at a time by using
		chars becuase voids will end up trying to dereference a void
		pointer (this does not work) plus chars are only one byte.

- Looping and Setting Values
    - The function uses a while loop until n hits 0

- Setting Character Value Inside the loop:
    - *ptr++ = (unsigned char)c: This line performs three actions:
        - *ptr: Dereferences the ptr pointer, accessing the current byte in
			the memory block.
        - = (unsigned char)c: Assigns the value of c (converted to unsigned
			char) to the current byte, ensuting we're assigning a single byte
			value.
         - ptr++: Increments ptr after the assignment, moving it to point to
			the next byte in the memory block for the next iteration.

- Returning the Pointer
    - After the loop completes, the function returns the original pointer s.
		This is because s already points to the beginning of the modified
		memory block.

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>

int	main(void)
{
	char	str1[10];
	char	str2[10];

	strlcpy(str1, "abcdefghi", sizeof(str1));
	strlcpy(str2, "abcdefghi", sizeof(str2));
	printf("Before ft_memset: %s\n", str2);
	ft_memset(str2, 'x', 5);
	printf("After ft_memset: %s\n", str2);
	return (0);
}
*/