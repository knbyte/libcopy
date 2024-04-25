/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:52:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/26 01:10:27 by emduncan         ###   ########.fr       */
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

A b o u t   F u n c t i o n :

bzero stands for "Byte ZERO"
The bzero function sets the first n bytes of the string s to zeroes.


F u n c t i o n   P r o c e s s :

We declare a character pointer (str) and set it to the start of the string (s).

While n is greater than zero, we decrement n and increment the pointer.
This works because the bzero() function only writes zero bytes to the string.

The pointer (str) is incremented after each write, so it starts at the first
character of the string (s) and goes up to the last character.

ft_bzero
- Takes two arguments:
	- void *s: Pointer to a memory block (any data type).
	- unsigned long n: Number of bytes to set to zero.

- Declares a char pointer str and assigns the casted value of s to it
	(treats s as a character array).

- Initiates a while loop that continues as long as n is greater than zero
	(post-decrement n--).
	- Inside the loop:
		- Sets the character pointed to by str to the null terminator (\0).
		- Increments str to point to the next character in the memory block.
		- Post-decrement str ensures it traverses the memory block character
			by character
- Effectively sets the first n bytes of the memory block pointed to by s to zero.

M a i n   F o r   T e s t i n g : */

/*
comp ft_bzero.c ft_putstr_fd.c

#include <stdio.h>
#include "libft.h"

void	ft_putstr(char *str, int len)
{
	int	ctr;
	
	ctr = 0;
	while (ctr < len)
		write(1, &str[ctr++], 1);
	write(1, "\n", 1);
}

int	main(void)
{
	char str[] = "Bye World!";

	ft_putstr_fd("Before ft_bzero:", 1);
	ft_putstr(str, 11);
	ft_bzero(str, 5);
	ft_putstr_fd("After ft_bzero, 5:", 1);
	ft_putstr(str, 11);

	return (0);
}
*/