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

F u n c t i o n   I n f o :

We initialize two variables, total_size, which is the total size of the
allocated memory, and ptr, which is the pointer to the allocated memory.

We then multiply count by size to get the total size of the allocated memory.

We then call the malloc() function to allocate the memory.  If successful,
we call the bzero() function to initialize the memory to zero.

Finally, we return the pointer to the allocated memory.


M a n u a l    P a g e    I n f o :

SYNOPSIS
	#include <stdlib.h>

	void *
	calloc(size_t count, size_t size);

DESCRIPTION
	The calloc() function allocates memory.  The allocated memory is aligned
	such that it can be used for any data type, including AltiVec- and 
	SSE-related types. The free() function frees allocations that were created
	via the preced-ing allocation functions.

	The calloc() function contiguously allocates enough space for count
	objects that are size bytes of memory each and returns a pointer to the
	allocated memory.  The allocated memory is filled with bytes of value
	zero.

RETURN VALUES
	If successful, calloc() function return a pointer to allocated memory.
	If there is an error, they return a NULL pointer and set errno to ENOMEM.
	
*/