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

A b o u t   F u n c t i o n :

atoi stands for "Ascii TO Integer"
The atoi fucntion converts a string to an integer numerical representation.
It does this by taking a string as an argument and returning the converted integer.


F u n c t i o n   P r o c e s s :

Delcare and define three varables, the counter/iterater at the first digit (0), 
the result (0), and the sign as positive (1).

First we skip all the spaces, tabs, newlines, vertical tabs, form feeds,
and carriage returns.

Then we check if the first character is a minus or plus sign.
If it is negative (shown by the minus sign), we set the sign to -1.

We then increment the iterator and check if the next character is a digit.
If it is, we multiply the result by 10 and add the digit to it.
We then increment the iterator again.
We return the result multiplied by the sign.

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
	}
	else
	{
		printf("Usage: ft_atoi <string>\n");
	}
	return (0);
}
*/