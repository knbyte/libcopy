/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:06:38 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:10:59 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	while (n--)
		((char *)dest)[n] = ((char *)src)[n];
	return (dest);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

memcpy stands for "Memory Copy"
The memcpy function copies n bytes from the object pointed to by s2
into the object pointed to by s1.


F u n c t i o n   P r o c e s s :

- Handling NULL Pointers
    -  Checks if both dest or src are valid pointers (are pointing at something)
        and returns NULL of either are invald.

- Looping and Copying:
    - The function uses a while loop that decrements n before each iteration.
        (Ensuring n bytes are copied.)
    - Inside the loop:
            - Dest/src are cast to character pointers (going 1 byte at a time).
            - Starts and n and decrements, going backwards byte by byte.
            - Dereferencing to access the value itself.
            - Copies the value from the source byte to the destination byte.

- Returning the Pointer
    - After the loop completes, the function returns dest.

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>

int     main(void)
{
    char    dest[100];
    char    src[] = "Hello, world!";

    ft_memset(dest, 0, 100);
    ft_memcpy(dest, src, ft_strlen(src));
    printf("%s\n", dest);

    return (0);
}
*/
