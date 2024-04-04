/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:52:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/25 17:57:48 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned long n)
{
	char	*str;

	note("While str[ctr] is a digit, multiply res by 10 and add\
		the value of str[ctr] minus 48 (ASCII value of 0)");
	note("Cast the void pointer to a char pointer to manipulate bytes");
	str = (char *)s;
	note("Loop through each byte of the memory block");
	while (n-- > 0)
		*str++ = '\0';
	note("While str[ctr] is a digit, multiply res by 10 and add\
		the value of str[ctr] minus 48 (ASCII value of 0)");
}

#ifdef DO_MAIN

int	main(void)
{
	char	str1[10];

	strlcpy(str1, "abcdefghi", sizeof(str1));
	printf("Before ft_bzero: %s\n", str1);
	note("set the first 5 characters to zero");
	ft_bzero(str1, 5);
	printf("After ft_bzero: %s\n", str1);
	return (0);
}
#endif
/*
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