/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:12:14 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 18:40:21 by emduncan         ###   ########.fr       */
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
It does this by taking a string as an argument and returning the converted
integer.


F u n c t i o n   P r o c e s s :

- Skip all whitespace

- Check if first character is a minus/plus sign, if negative set sign to -1.

- Regardless of the sign, increment ctr to move past the sign character
	(either + or -).

- Check for digit, if digit:
	- multiply the result by 10 (make space for new digit)
	- take 48 from the chartacter to get numerical value of digit
	- add obtained digit to result
	- increment ctr to move to next character

- Multiply final result by the sign (to handle pos/neg numbers)

- Return the converted integer value.


M a i n   F o r   T e s t i n g :

cc -Wall -Werror -Wextra ft_atoi.c

./a.out
*/
/*
#include <stdio.h>
 
int main(void)
{
    int testpos;
	int	testneg;
    char *pos;
	char *neg;
 
    pos = " \t \n 42";
	neg = " \t \n -42";
    testpos = ft_atoi(pos);
	testneg = ft_atoi(neg);

    printf("Positive Number Test = %d\n",testpos);
	printf("Negative Number Test = %d\n",testneg);
}
*/