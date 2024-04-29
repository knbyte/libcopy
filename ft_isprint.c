/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:52:25 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 15:08:38 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n : 

Printing character test (space character inclusive)
Tests for any printing character, including space.


F u n c t i o n   P r o c e s s :

We check if the character is in the range of ASCII printable characters
(32-126). If it is, we return 1. Otherwise, we return 0.

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
    printf("a: %d\n", ft_isprint(chr));
	printf("1: %d\n", ft_isprint(nbr));
	printf("+: %d\n", ft_isprint(sign));
	printf(".: %d\n", ft_isprint(sp));
	printf(" : %d\n", ft_isprint(dot));
	printf("/n: %d\n", ft_isprint(nwli));
}
*/