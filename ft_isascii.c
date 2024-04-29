/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:44:40 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 15:07:13 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	return (0);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

Tests for an ASCII character, which is any character between 0 and 
octal 0177 inclusive.


F u n c t i o n   P r o c e s s :

We check if the character is in the range of ASCII characters (0-0177).
If it is, we return 1. Otherwise, we return 0.

M a i n   F o r   T e s t i n g : */
/*
#include <unistd.h>
#include <stdio.h>

int    main(void)
{
	int	chr = 'a';
	int	nbr = '1';
	int	sign = '+';
	int	dot = '.';
	int	sp = ' ';
	int	nwli = '\n'; 
    printf("a: %d\n", ft_isascii(chr));
	printf("1: %d\n", ft_isascii(nbr));
	printf("+: %d\n", ft_isascii(sign));
	printf(".: %d\n", ft_isascii(sp));
	printf(" : %d\n", ft_isascii(dot));
	printf("/n: %d\n", ft_isascii(nwli));
}
*/