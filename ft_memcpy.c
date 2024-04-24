/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:06:38 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 17:05:24 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

We declare a variable dest_ptr, which is a pointer to the destination string.
We check if the destination and source strings are not NULL, if they are, 
we return NULL.

We use a while loop while decrementing n to copy n bytes from the source 
string to the destination string. We use the *(char *) operator to convert
the pointer to a char and increment the pointers by 1 byte.

We return the pointer to the destination string.

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