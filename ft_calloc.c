/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:53:47 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:37:09 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function to allocate memory and initialize to zero
void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr)
		ft_bzero(ptr, total_size);
	return (ptr);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

calloc stands for "C Allocated"
The calloc function allocates memory for an array of n objects of size bytes each
and initializes all the bytes to zeroes.
It does this by taking two arguments, n and size, and returning a pointer to the
allocated memory.


F u n c t i o n   P r o c e s s :

We initialize two variables, total_size, which is the total size of the
allocated memory, and ptr, which is the pointer to the allocated memory.

We then multiply count by size to get the total size of the allocated memory.

We then call the malloc() function to allocate the memory.  If successful,
we call the bzero() function to initialize the memory to zero.

Finally, we return the pointer to the allocated memory.


M a i n   F o r   T e s t i n g : */
/*


*/