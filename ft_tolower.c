/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:58:39 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 15:50:35 by emduncan         ###   ########.fr       */
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

A b o u t   F u n c t i o n :

The tolower() function converts an upper-case letter to the corresponding
lower-case letter. If the argument is an upper-case letter, the tolower()
function returns the corresponding lower-case letter if there is one;
otherwise, the argument is returned unchanged.

F u n c t i o n   P r o c e s s :

We check if the character is in the range of uppercase letters (65-90)
or lowercase letters (97-122). If it is, we return the lowercase version
of the character by adding 32 to it (the difference on the ASCII table).
Otherwise, we return the original character.*/
