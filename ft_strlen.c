/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:12:31 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:50:04 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
		ctr++;
	return (ctr);
}

/*

~ N O T E S ~

F u n c t i o n   I n f o :

We initialize a counter variable ctr to 0. We then iterate through the
string, incrementing the counter each time we encounter a character. We
then return the value of the counter.

M a n u a l    P a g e    I n f o :

NAME
     strlen -- find length of string

SYNOPSIS
     #include <string.h>

     size_t
     strlen(const char *s);

DESCRIPTION
     The strlen() function computes the length of the string s. 
	 The strnlen() function attempts to compute the length of s, but never
     scans beyond the first maxlen bytes of s.

RETURN VALUES
     The strlen() function returns the number of characters that precede 
	 the terminating NUL character.  The strnlen() function
     returns either the same result as strlen() or maxlen, whichever is smaller.

*/