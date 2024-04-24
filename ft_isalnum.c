/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:10:57 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:36:49 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || \
	(c >= 65 && c <= 90) || \
	(c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*

~ N O T E S ~

F u n c t i o n   I n f o :

We check if the character is a digit, an uppercase letter, or a lowercase
letter using the ascii values.  If it is, we return 1, otherwise we return 0.

M a n u a l    P a g e    I n f o :

NAME
     isalnum -- alphanumeric character test

DESCRIPTION
     The isalnum() function tests for any character for which isalpha(3) or
     isdigit(3) is true.  The value of the argument must be representable as
     an unsigned char or the value of EOF.

RETURN VALUES
     The isalnum() function returns zero if the character tests false and
     returns non-zero if the character tests true.
     
*/