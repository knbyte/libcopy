/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:12:49 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 23:09:56 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			ctr;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	ctr = 0;
	if (n == 0)
		return (0);
	while (s1[ctr] == s2[ctr] && (ctr < n - 1))
		ctr++;
	return (s1[ctr] - s2[ctr]);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

memcmp stands for "Memory Compare"
The memcmp function compares the first n bytes of the object pointed to by
s1 and the object pointed to by s2.


F u n c t i o n   P r o c e s s :

- Variable Setup
    - ctr: a counter to iterate through the strings.
    - s1: A pointer to unsigned char initialized by casting str1. This treats the
		memory pointed to by str1 as a sequence of unsigned characters (bytes).
    - s2: A pointer to unsigned char initialized by casting str2. Similar to s1,
		it treats the memory pointed to by str2 as a sequence of bytes.

- Handling Zero Length
    - The function first checks if n is 0. If it is, it directly returns 0,
		indicating that the strings are identical / no bytes need to be compared.

- Looping and Comparing
    - The function uses a while loop with two conditions:
        - If the current byte at the same index in both strings are equal.
        - The loop continues only as long as the counter ctr is less than n - 1.
		
- Incrementing Counter
    - Inside the loop, the ctr is incremented (ctr++) after the comparison.
		This moves s1 and s2 pointers to the next byte for the next iteration.

- Returning the Difference
    - The loop exits when a condition in the while loop becomes false:
        - If the bytes at the current index in both strings are no longer equal.
        - If the counter reaches n - 1 (meaning n bytes have been compared)
    - The function returns the difference between the two unequal bytes.
*/