/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:28:53 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:08:13 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*

~ N O T E S ~

F u n c t i o n   I n f o :

A b o u t   F u n c t i o n :

Decimal-digit character test / Tests for a decimal digit character.


F u n c t i o n   P r o c e s s :

We check if the character is in the range of ASCII digits (48-57).
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
    printf("a: %d\n", ft_isdigit(chr));
	printf("1: %d\n", ft_isdigit(nbr));
	printf("+: %d\n", ft_isdigit(sign));
	printf(".: %d\n", ft_isdigit(sp));
	printf(" : %d\n", ft_isdigit(dot));
	printf("/n: %d\n", ft_isdigit(nwli));
}
*/