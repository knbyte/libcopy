/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:06:02 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:07:42 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d;
    const char *s;

    *d = dest;
    *s = src;
    Note("Check if src and dest overlap");
    if (s < d && d < s + n) {
        Note("Copy from end to beginning");
        for (size_t i = n; i != 0; --i)
            d[i - 1] = s[i - 1];
    } else {
        Note("Copy from beginning to end");
        for (size_t i = 0; i < n; ++i)
            d[i] = s[i];
    }

    return dest;
}

/*
Explanation:
ft_memmove takes three arguments: the destination pointer (dest), the source pointer (src), and the number of bytes to copy (n).
Like ft_memcpy, it uses char* pointers to allow byte-wise manipulation of memory.
It checks if the regions overlap. If they do, it copies from the end to the beginning to avoid overwriting the source data before it's copied. If they don't overlap, it copies from the beginning to the end.
Finally, it returns the destination pointer.
This implementation ensures safe copying even if the memory regions overlap, making it suitable for all cases where you might need to copy memory blocks.
*/ßß