/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:03 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 19:43:43 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digit_count(int n)
{
	int	ctr;

	ctr = 0;
	if (n < 0)
		ctr++;
	while (n > 9 || n < -9)
	{
		n /= 10;
		ctr++;
	}
	return (ctr + 1);
}

char	*ft_strrev(char *str)
{
	int		ctr1;
	int		ctr2;
	char	temp;

	ctr1 = 0;
	ctr2 = ft_strlen(str) - 1;
	while (ctr1 < ctr2)
	{
		temp = str[ctr2];
		str[ctr2] = str[ctr1];
		str[ctr1] = temp;
		ctr1++;
		ctr2--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			ctr;
	int			sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	res = (char *)malloc(ft_digit_count(n) + 1);
	if (!res)
		return (NULL);
	ctr = 0;
	while (n > 9 || n < -9)
	{
		res[ctr++] = (n % 10) * sign + '0';
		n /= 10;
	}
	res[ctr++] = n * sign + '0';
	if (sign == -1)
		res[ctr++] = '-';
	res[ctr] = '\0';
	return (ft_strrev(res));
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :
Itoa - Integer to Ascii
Allocates with malloc(3) and returns a string representing the integer
received as an argument. Handles negative numbers and returns NULL if
the allocation fails.

F u n c t i o n   P r o c e s s :

ft_digit_count:  counts the number of digits in an integer
	- initialises a counter (ctr) to 0
	- checks if the number is negative.
		- If so, increments ctr by 1 to account for the sign.
	- Loops while n is greater than 9 or less than -9 (to allow multi-digit nbrs)
	- Each iteration divided n by 10 (removing last digit and incrementing ctr)
	- Returns ctr + 1 to account for the last digit (not included in the loop)
		and the potential sign.


ft_strrev:  reverses the string. 
 	- Initializes two counter variables:
		- ctr1 starts at 0 (index of the beginning of the string).
    	- ctr2 starts at the last index (ft_strlen(str) - 1).

	- Loops while ctr1 is less than ctr2 (iterates through half the string).

    - Uses a temporary variable temp to swap the characters at ctr1 and ctr2
		positions in the string. Increments ctr1 and decrements ctr2 to move
		towards the middle of the string.

	- Returns the modified string str with characters reversed.


ft_itoa:  converts an integer to a string

	- Initializes variables:
		- res: Pointer to a character array that will store the resulting string.
    	- ctr: Counter variable used for indexing the resulting string.
    	- sign: integer variable storing the sign (+ or -).

	- Sets sign to 1, check if n is negative, if so changesign to -1.

	- Allocates memory for string using ft_count_digit + 1 for null terminator.
		- If allocation fails returns NULL.

	- Initializes ctr to 0.
	- Loops while n is greater than 9 or less than -9
    	- Calculates the remainder of n divided by 10 (the last digit).
    	- Multiplies the remainder by sign to account for the negative sign.
    - Adds '0' to the remainder (converts it to an ASCII character).
    - Stores the calculated character in the resulting string at index ctr.
    - Increments ctr to move to the next position in the resulting string.
    - Divides n by 10 (effectively removing the last digit).

	- Handles the last digit (outside the loop):
		- Calculates the character for the last digit same way as above loop did.
    	- Stores it in the resulting string at index ctr.

	- If n was negative, adds '-' to the beginning of the resulting string.
	
	- Adds the null terminator at the end of the resulting string
	
	- Calls ft_strrev to reverse the resulting string because digits
		were appended in the reverse order during the loop.
	
	- Returns the resulting string.
*/