/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:53:47 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/05 20:05:25 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function to allocate memory and initialize to zero
void *ft_calloc(size_t count, size_t size)
{
    // Calculate total size needed for allocation
    size_t total_size = count * size;

    // Allocate memory block
    void *ptr = malloc(total_size);

    // Check if memory allocation was successful
    if (ptr)
        ft_bzero(ptr, total_size); // Initialize memory block to zero

    return ptr; // Return pointer to allocated memory
}

#define DO_MAIN

int main()
{
    int *arr;
    size_t i, size = 5;

    // Allocate memory for an array of integers
    arr = (int *)ft_calloc(size, sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Print the array elements
    printf("Array elements after calloc:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
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