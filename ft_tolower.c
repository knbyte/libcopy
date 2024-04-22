/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:58:39 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:46:46 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*

~ N O T E S ~

F u n c t i o n   I n f o :

We check if the character is in the range of uppercase letters (65-90)
or lowercase letters (97-122). If it is, we return the lowercase version
of the character by adding 32 to it (the difference on the ASCII table).
Otherwise, we return the original character.

M a n u a l    P a g e    I n f o :

SYNOPSIS
     int
     tolower(int c);

DESCRIPTION
     The tolower() function converts an upper-case letter to the 
	 corresponding lower-case letter.  The argument must be representable
     as an unsigned char or the value of EOF.

RETURN VALUES
     If the argument is an upper-case letter, the tolower() function
	 returns the corresponding lower-case letter if there is one;
     otherwise, the argument is returned unchanged.

*/