/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:52:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:37:19 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned long n)
{
	char	*str;

	str = (char *)s;
	while (n-- > 0)
		*str++ = '\0';
}

/*

~ N O T E S ~

F u n c t i o n   I n f o :

We initialize a character pointer (str) to the start of the string (s).

While n is greater than zero, we decrement n and increment the pointer.
This works because the bzero() function only writes zero bytes to the string.

The pointer (str) is incremented after each write, so it starts at the first
character of the string (s) and goes up to the last character.

The loop will stop when n reaches zero, because the loop will not execute
if n is equal to zero.

The loop writes the value of '\0' to each character of the string (s).

The effect of this function is that it sets the first n characters of the
string (s) to zeroes, which is the same as the standard bzero() function.

M a n u a l    P a g e    I n f o :

NAME
	bzero -- write zeroes to a byte string

SYNOPSIS
	#include <strings.h>

	void
	bzero(void *s, size_t n);

DESCRIPTION
	The bzero() function writes n zeroed bytes to the string s.  If n is
	zero, bzero() does nothing.
	
*/