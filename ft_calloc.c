/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:53:47 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/25 17:59:41 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function to allocate memory and initialize to zero
void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	note("Calculate total size needed for allocation");
	total_size = count * size;
	note("Allocate memory block");
	ptr = malloc(total_size);
	note("Check if memory allocation was successful, \
	initialise memblock to 0. return ptr to allocated memory");
	if (ptr)
		ft_bzero(ptr, total_size);
	return (ptr);
}

#ifdef DO_MAIN

int	main(void)
{
	int		*arr;
	size_t	i;

	size = 5;
	arr = (int *)ft_calloc(size, sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Array elements after calloc:\n");
	i = 0;
	while (i < size)
		printf("%d ", arr[i++]);
	printf("\n");
	free(arr);
	return (0);
}
#endif
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