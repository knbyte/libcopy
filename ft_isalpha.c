/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:28:06 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/25 18:02:18 by emduncan         ###   ########.fr       */
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
NAME
    isalpha -- alphabetic character test
	 
DESCRIPTION
    The isalpha() function tests for any character for which isupper(3) or
    islower(3) is true.  The value of the argument must be representable as
    an unsigned char or the value of EOF.
*/