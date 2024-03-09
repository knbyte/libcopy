/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:12:37 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:12:34 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *ptr, int value, size_t n)
{
    const unsigned char *p;

    *p = ptr;
    Note("Cast ptr to unsigned char pointer for byte-wise comparison");

    Note("Loop through the memory area until the specified length");
    for (size_t i = 0; i < n; i++)
    {
        Note("If the byte at the current position matches the value, return a pointer to it");
        if (p[i] == (unsigned char)value)
            return (void *)(p + i);
    }

    Note("If the value is not found within the specified length, return NULL");
    return NULL;
}

/*
The ft_memchr function scans the initial n bytes of the memory area pointed to by ptr for a byte matching a specific value.
It returns a pointer to the first occurrence of the byte value in the memory area, or NULL if no such byte is found within the specified length.
*/