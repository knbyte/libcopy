/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:12:14 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:37:14 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	ctr;
	int	result;
	int	sign;

	ctr = -1;
	result = 0;
	sign = 1;
	while (str[++ctr] == ' ' || str[ctr] == '\t' || str[ctr] == '\n' || \
			str[ctr] == '\v' || str[ctr] == '\f' || str[ctr] == '\r')
		;
	if (str[ctr] == '-')
		sign = -1;
	if (str[ctr] == '-' || str[ctr] == '+')
		++ctr;
	while (str[ctr] >= 48 && str[ctr] <= 57)
	{
		result = result * 10 + (str[ctr] - 48);
		++ctr;
	}
	return (result * sign);
}

/*

~ N O T E S ~

F u n c t i o n   I n f o :

Initialise three varables, the counter/iterater at the first digit (0), 
the result (0), and the sign as positive (1).

First we skip all the spaces, tabs, newlines, vertical tabs, form feeds,
and carriage returns.

Then we check if the first character is a minus or plus sign.
If it is negative (shown by the minus sign), we set the sign to -1.

We then increment the iterator and check if the next character is a digit.
If it is, we multiply the result by 10 and add the digit to it.
We then increment the iterator again.
We return the result multiplied by the sign.


M a n u a l    P a g e    I n f o :

NAME
	atoi -- convert ASCII string to integer

SYNOPSIS
	#include <stdlib.h>

	int
	atoi(const char *str);

DESCRIPTION
	The atoi() function converts the initial portion of the string pointed
	to by str to int representation.

ERRORS
	The function atoi() need not affect the value of errno on an error.
	
*/