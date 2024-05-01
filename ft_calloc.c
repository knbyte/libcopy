/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:53:47 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:07:22 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
The calloc function allocates memory for an array of n objects of size bytes
each and initializes all the bytes to zeroes.
It does this by taking two arguments, n and size, and returning a pointer to
the allocated memory.


F u n c t i o n   P r o c e s s :

- Decalre variables
	- total_size: total size of the allocated memory
	- ptr: pointer to store address of allocated memory.

- Calculate Total Size
	- Multiply count by size to get the total amount memory to allocate.
	- We call malloc to allocate the memory.
		- Malloc attempts to allocate a block of memory of the specified size and
		returns a pointer to the beginning of that block.
	- Assign the return value of malloc (the memory address) to ptr.

- Initialize Memory
	- If successful, call the ft_bzero function to set all bytes in the allocated
		memory to zero.

- Return Memory Pointer
	- Return the pointer to the allocated memory block.
*/