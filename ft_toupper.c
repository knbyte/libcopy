/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:59:23 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 19:09:12 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

The toupper() function converts a lower-case letter to the corresponding
upper-case letter.  If the argument is a lower-case letter, the toupper()
function returns the corresponding upper-case letter if there is one;
otherwise, the argument is returned unchanged.


F u n c t i o n   P r o c e s s :

We check if the character is in the range of lowercase letters (97-122).
If it is, we return the uppercase version of the character by subtracting
32 from it (the difference on the ASCII table). Otherwise, we return the
original character.
*/