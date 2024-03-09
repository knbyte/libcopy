/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:06:38 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:06:57 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *d;
    const char *s;

    *d = dest;
    *s = src;
    Note("Check if the destination and source regions overlap");
    if (s < d && d < s + n)
    {
        Note("If there is overlap, copy from end to beginning to avoid overwriting source before copying");
        for (size_t i = n; i != 0; --i)
            d[i - 1] = s[i - 1];
    }
    else
    {
        Note("If there is no overlap, copy from beginning to end");
        for (size_t i = 0; i < n; ++i)
            d[i] = s[i];
    }
    Note("Return a pointer to the destination");
    return dest;
}