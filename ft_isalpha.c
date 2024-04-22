/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:28:06 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:38:24 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*

~ N O T E S ~

F u n c t i o n   I n f o :

We check if the character is in the range of uppercase letters (65-90)
or lowercase letters (97-122). If it is, we return 1. Otherwise, we return 0.

M a n u a l    P a g e    I n f o :

NAME
    isalpha -- alphabetic character test
	 
DESCRIPTION
    The isalpha() function tests for any character for which isupper(3) or
    islower(3) is true.  The value of the argument must be representable as
    an unsigned char or the value of EOF.
    
*/