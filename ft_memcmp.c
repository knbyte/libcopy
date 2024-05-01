/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:12:49 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:10:55 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *mem1, const void *mem2, size_t n)
{
	size_t			ctr;
	unsigned char	*m1;
	unsigned char	*m2;

	m1 = (unsigned char *)mem1;
	m2 = (unsigned char *)mem2;
	ctr = 0;
	if (n == 0)
		return (0);
	while (m1[ctr] == m2[ctr] && (ctr < n - 1))
		ctr++;
	return (m1[ctr] - m2[ctr]);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

memcmp stands for "Memory Compare"
The memcmp function compares the first n bytes of the object pointed to by
m1 and the object pointed to by m2.


F u n c t i o n   P r o c e s s :

- Variable Setup
    - ctr: a counter to iterate through the blocks.
    - m1: A pointer to the start of a block of memory.
    - m2: A pointer to the start of another block of memory.

- Handling Zero Length
    - The function first checks if n is 0. If it is, it directly returns 0,
		indicating that the strings are identical / no bytes need to be compared.

- Looping and Comparing
    - The function uses a while loop with two conditions:
        - If the current byte at the same index in both strings are equal.
        - The loop continues only as long as the counter ctr is less than n - 1.
		This ensures that the loop runs n - 1 times.
			(-1 to allow for arrays starting at 0 (0 1 2 3 4 + 5 bytes)
		
- Incrementing Counter
    - Inside the loop, the ctr is incremented (ctr++) after the comparison.
		This moves m1 and m2 pointers to the next byte for the next iteration.

- Returning the Difference
    - The loop exits when a condition in the while loop becomes false:
        - If the bytes at the current index in both strings are no longer equal.
        - If the counter reaches n - 1 (meaning n bytes have been compared)
    - The function returns the difference between the two unequal bytes.
*/