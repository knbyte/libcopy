/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:44:40 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:38:49 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	return (0);
}

/*

~ N O T E S ~

F u n c t i o n   I n f o :

We check if the character is in the range of ASCII characters (0-0177).
If it is, we return 1. Otherwise, we return 0.

M a n u a l    P a g e    I n f o :
NAME
    isascii -- test for ASCII character

DESCRIPTION
    The isascii() function tests for an ASCII character, which is any charac-
    ter between 0 and octal 0177 inclusive.

*/