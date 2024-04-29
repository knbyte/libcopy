/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:06:38 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/30 00:03:14 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (dest_ptr);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

memcpy stands for "Memory Copy"
The memcpy function copies n bytes from the object pointed to by s2
into the object pointed to by s1.


F u n c t i o n   P r o c e s s :

- Variable Setup
    - dest_ptr: pointer holding the original destination pointer (dest).

- Handling NULL Pointers
    -  Checks for a special case where both dest and src are NULL pointers.
	-  If both are NULL, it simply returns dest (which is already NULL).

- Looping and Copying:
    - The function uses a while loop that decrements n before each iteration.
		(Ensuring n bytes are copied.)
    - Inside the loop:
        - This line performs the actual copy operation:
            - Both dest and src are cast to char* to treat them as character
				pointers to char pointers to access them 1 byte at a time.
            - The dereferencing (*) operator accesses the value at the memory
				location pointed to by each pointer.
            - The assignment = copies the value from the source byte
				(*(char *)src) to the destination byte (*(char *)dest).
            - The post-increment moves both dest and src up while n is counting down.

- Returning the Pointer
    - After the loop completes, the function returns dest_ptr which holds the
	original destination pointer (dest).

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>

int		main(void)
{
	char	dest[100];
	char	src[] = "Hello, world!";

	ft_memset(dest, 0, 100);
	ft_memcpy(dest, src, ft_strlen(src));
	printf("%s\n", dest);

	return (0);
}
*/