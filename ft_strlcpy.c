/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:06:21 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:06:24 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Function to copy and concatenate strings
Copies up to destsize - 1 characters
Returns the length of src, null-terminating the result*/

void *ft_strlcpy(char *dest, const char *src, size_t destsize)
{
    size_t srcsize;
    size_t ctr;

    Note("Check if dest or src is NULL, return 0");
    if (!dest || !src)
        return (0);

    Note("Calculate the length of src.");
    srcsize = ft_strlen(src);
    ctr = 0;
    
    Note("Copy characters from src to dest, up to destsize - 1 characters");
    if (destsize != 0)
    {   
        Note("Copies up to destsize - 1 characters");
        while (src[ctr] && ctr < (destsize - 1))
        {
            dest[ctr] = src[ctr];
            ctr++;
        }
        Note("Null-terminate the result");
        dest[ctr] = '\0';
    }
    Note("Return the length of src");
    return (srcsize);
}