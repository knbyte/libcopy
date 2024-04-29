/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:10:57 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 15:06:13 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || \
	(c >= 65 && c <= 90) || \
	(c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

Alphanumeric character test
The isalnum() function tests for any character for which isalpha(3) or
isdigit(3) is true.
The isalnum() function returns zero if the character tests false and
returns non-zero if the character tests true.


F u n c t i o n   P r o c e s s :

We check if the character is a digit, an uppercase letter, or a lowercase
letter using the ascii values.  If it is, we return 1, otherwise we return 0.

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
    printf("a: %d\n", ft_isalnum(chr));
	printf("1: %d\n", ft_isalnum(nbr));
	printf("+: %d\n", ft_isalnum(sign));
	printf(".: %d\n", ft_isalnum(sp));
	printf(" : %d\n", ft_isalnum(dot));
	printf("/n: %d\n", ft_isalnum(nwli));
}
*/