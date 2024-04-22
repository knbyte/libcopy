/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:53:47 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:08:07 by emduncan         ###   ########.fr       */
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
NAME
	calloc

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