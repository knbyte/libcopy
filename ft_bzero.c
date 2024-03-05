/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:52:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/05 20:17:05 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "note.c"

void    ft_bzero(void *s, unsigned long n)
{
    Note("Declare a character pointer to point to the memory block");
    char    *str;

    Note("Cast the void pointer to a char pointer to manipulate bytes");
    str = (char *)s;
    Note("Loop through each byte of the memory block");
    while (n-- > 0)
    Note("Set the current byte to '\0' (zero) and move to the next byte");
        *str++ = '\0';
}

#ifdef DO_MAIN

int main()
{
    char str1[10];
    
	strlcpy(str1, "abcdefghi", sizeof(str1));

    printf("Before ft_bzero: %s\n", str1);
    Note("set the first 5 characters to zero");
    ft_bzero(str1, 5);
    printf("After ft_bzero: %s\n", str1);
    return 0;
}
#endif
// cc -Wall -Wextra -Werror -DDO_MAIN ft_bzero.c

/*
NAME
    bzero -- write zeroes to a byte string

SYNOPSIS
    #include <strings.h>

    void
    bzero(void *s, size_t n);

DESCRIPTION
    The bzero() function writes n zeroed bytes to the string s.  If n is
    zero, bzero() does nothing.
*/