/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:12:49 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 22:30:27 by emduncan         ###   ########.fr       */
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

We declare three variables, ctr, which is a counter variable used to
count through the strings, and s1 and s2, which are pointers to the
strings to be compared.

We set ctr to 0. If n is 0, we return 0, otherwise we use our counter to
increment thorugh both strings while they are equal and the counter is
less than n - 1 because we want to compare n bytes. We - 1 becuase we want to
stop before we compare the n+1th byte. (If we did compare the n+1th byte, we risk
going out of bounds of either of the strings.)

Once we hit the end of the string, or once the strings are no longer equal, we
return the difference between the two strings at the current index (ctr).



Variable Setup:

    ctr: An integer variable initialized to 0, used as a counter to iterate through the strings.
    s1: A pointer to unsigned char initialized by casting str1. This treats the memory pointed to by str1 as a sequence of unsigned characters (bytes).
    s2: A pointer to unsigned char initialized by casting str2. Similar to s1, it treats the memory pointed to by str2 as a sequence of bytes.

Handling Zero Length:

    The function first checks if n (the number of bytes to compare) is 0. If it is, it directly returns 0, indicating that the strings are identical (since no bytes need to be compared).

Looping and Comparing:

    The function uses a while loop with two conditions:
        s1[ctr] == s2[ctr]: This condition checks if the current byte at the same index (ctr) in both strings (s1 and s2) are equal.
        (ctr < n - 1): This condition ensures the loop continues only as long as the counter ctr is less than n - 1. This is because we want to compare at most n bytes, and accessing s1[n] or s2[n] could potentially cause a memory out-of-bounds error if the strings are shorter than n bytes.

Incrementing Counter:

    Inside the loop, the counter ctr is incremented (ctr++) after the comparison. This moves both s1 and s2 pointers to the next byte for the next iteration.

Returning the Difference:

    The loop exits when either of the comparison conditions in the while loop becomes false:
        If the bytes at the current index (ctr) in both strings are no longer equal (s1[ctr] != s2[ctr]), the loop terminates.
        If the counter reaches n - 1 (meaning n bytes have been compared), the loop also terminates.
    In both cases, the function returns the difference between the two unequal bytes (s1[ctr] - s2[ctr]). This difference indicates which string has a higher byte value at the point of difference.
*/