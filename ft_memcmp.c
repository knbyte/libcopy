/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:12:49 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 18:41:58 by emduncan         ###   ########.fr       */
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
*/