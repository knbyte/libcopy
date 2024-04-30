/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:52:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/30 22:57:49 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *m, unsigned long n)
{
	char	*mem;

	mem = (char *)m;
	while (n-- > 0)
		*mem++ = '\0';
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

bzero stands for "Byte ZERO"
The bzero function sets the first n bytes of memory mem to zeroes.


F u n c t i o n   P r o c e s s :

ft_bzero
- Takes two arguments:
	- void *m: Pointer to a memory block (can be any data type).
	- unsigned long n: Number of bytes to set to zero.

- Declares a char pointer (makes sure we go one byte at a time)
	str and assigns the casted value of s to it
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
#include <stdio.h>
#include "libft.h"

void ft_putstr(char *str, int len)
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

	ft_putstr("\nBefore ft_bzero:", 18);
	ft_putstr(str, 11);
	ft_bzero(str, 4);
	ft_putstr("\nAfter ft_bzero, 4:", 20);
	ft_putstr(str, 11);
	return (0);
}
*/