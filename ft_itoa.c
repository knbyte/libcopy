/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:03 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/25 17:52:25 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
STATIC
Static int get_num_length(int n) is declared as a static function
within the file. This means it can only be called from within the same 
file, making it effectively private to that file. This encapsulation 
can be useful for helper functions or functions not intended to be
part of the external interface of a module or library.
*/

// This function calculates the absolute value of an integer
static int	ft_absval(int n)
{
	return ((((n) > 0) * 2 - 1) * (n));
}
/*
If 'Value' is greater than 0
(Value) > 0) - Evaluates to 1
* 2 ) - Evaluates to 2
 - 1) - Evaluates to 1
* (x) - 1 x 'Value'

If not
(x) > 0) - Evaluates to 0
(0 * 2 ) - Evaluates to 0
- 1) - Evaluates to -1
* ('Value') - Evaluates to -1 x - 'Value'
*/

// This function allocates memory for a string of a given size
static char	*ft_strnew(size_t size)
{
	char	*str;

	note("Allocate memory for string, including space for null terminator");
	str = (char *)malloc(sizeof(char) * (size + 1));
	note("Check if memory allocation was successful");
	if (!str)
		return (NULL);
	note("Return the pointer to the allocated memory");
	return (str);
}

// This function calculates the length of an integer when converted to a string
// and returns the string representation of the number
static int	ft_numlen(int num)
{
	int	len;

	len = 0;
	if (num < 1)
		len++;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	int		num;
	char	*str;

	sign = 0;
	if (n < 0)
		sign = 1;
	if (n == INT_MIN)
		return ("-2147483648");
	len = ft_numlen(n);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	num = ft_absval(n);
	while (len--)
	{
		*(str + len) = 48 + num % 10;
		num /= 10;
	}
	if (sign)
		*(str) = 45;
	return (str);
}

/*
ITOA FUNCTION COMMENTS

	First set sign to 0, then if num is negative,
	increment len to account for the - sign

			len = 0;
			if (num < 1)
				len++;


	Calculate length of string representation of the number, 
	allocate memry, check sucess, add null terminator, convert
	the number to its absoloute value.

			len = ft_numlen(n);
			str = ft_strnew(len);
			if (!str)
			return (NULL);
			*(str + len) = '\0';
			num = ft_absval(n);

	To fill string with digits of the nuber, convert digit to chararacters
	and store, move to = next number using '/=' (which divides the value of
	the left operand with the value of the right operand and assigns the
	result to the left operand)

			while (len--)
			{
				*(str + len) = 48 + num % 10;
				num /= 10;
			}



	If the nbr was negative, add '-' sign at beginning of the string,
	then return the string representation of the number
	
			if (sign)
				*(str) = 45;
			return (str);
}
*/