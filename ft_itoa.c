/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:03 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:18:01 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_itoa function allocates memory (with malloc(3)) and returns a string representing the integer received as an argument.
It handles negative numbers and special cases like INT_MIN correctly, ensuring proper string representation.
The returned string must be freed by the caller when it is no longer needed to avoid memory leaks.

STATIC
Static int get_num_length(int n) is declared as a static function
within the file. This means it can only be called from within the same 
file, making it effectively private to that file. This encapsulation 
can be useful for helper functions or functions not intended to be
part of the external interface of a module or library.
*/
#include "libft.h"

static int get_num_length(int n)
{
    Note("Initialize the length to 1");
    int length;

    length = 1;

    Note("If the number is negative, increment length to account for the negative sign");
    if (n < 0) {
        length++;
        Note("Take the absolute value of n to simplify counting digits");
        n = -n;
    }

    Note("Loop until n becomes a single digit");
    while (n >= 10) {
        Note("Increment length for each digit in n");
        length++;
        Note("Remove the least significant digit from n");
        n /= 10;
    }

    Note("Return the calculated length");
    return length;
}

char ft_itoa(int n)
{
    Note("Determine the sign of the number (1 for positive, -1 for negative)");
    int sign = (n < 0) ? -1 : 1;

    Note("Handle special case for INT_MIN");
    if (n == INT_MIN)
        return ft_strdup("-2147483648");

    Note("Calculate the length of the resulting string");
    int length = get_num_length(n);

    Note("Allocate memory for the string representation");
    charstr = (char )malloc(sizeof(char) (length + 1));
    if (!str)
        return NULL;

    Note("Terminate the string");
    str[length] = '\0';

    Note("If the number is zero, set the first character of the string to '0'");
    if (n == 0) {
        str[0] = '0';
        return str;
    }

    Note("Fill the string with digits from the least significant to the most significant");
    for (int i = length - 1; i >= 0; i--) {
        Note("Extract the least significant digit and add it to the string");
        if (n != 0) {
            Note("Convert the digit to its character representation and add it to the string");
            str[i] = '0' + (sign * (n % 10));
            Note("Remove the least significant digit from n");
            n /= 10;
        } else {
            Note("If n is zero but the number was originally negative, add the negative sign");
            if (sign == -1)
                str[0] = '-';
            break;
        }
    }

    Note("Return the resulting string representation");
    return str;
} 