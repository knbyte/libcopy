/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:52:25 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:42:55 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*

~ N O T E S ~

F u n c t i o n   I n f o :

We check if the character is in the range of ASCII printable characters
(32-126). If it is, we return 1. Otherwise, we return 0.

M a n u a l    P a g e    I n f o :

NAME
     isprint -- printing character test (space character inclusive)
DESCRIPTION
     The isprint() function tests for any printing character, including space
     (` ').  The value of the argument must be representable as an unsigned
     char or the value of EOF.

*/