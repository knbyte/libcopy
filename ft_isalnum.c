/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:10:57 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/05 21:03:55 by emduncan         ###   ########.fr       */
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