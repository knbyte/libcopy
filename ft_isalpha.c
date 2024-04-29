/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:28:06 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 15:06:24 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

Alphabetic character test
Tests for any character for which isupper(3) or islower(3) is true.


F u n c t i o n   P r o c e s s :

We check if the character is in the range of uppercase letters (65-90)
or lowercase letters (97-122). If it is, we return 1. Otherwise, we return 0.

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
    printf("a: %d\n", ft_isalpha(chr));
	printf("1: %d\n", ft_isalpha(nbr));
	printf("+: %d\n", ft_isalpha(sign));
	printf(".: %d\n", ft_isalpha(sp));
	printf(" : %d\n", ft_isalpha(dot));
	printf("/n: %d\n", ft_isalpha(nwli));
}
*/