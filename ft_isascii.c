/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:44:40 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:38:49 by emduncan         ###   ########.fr       */
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
#include <stdio.h>

int	main(void)
{
	int	i;

	i = -255;
	while (i < 255)
	{
		if (ft_isascii(i) == 1)
			printf("%d is an ASCII character\n", i);
		else
			printf("%d is not an ASCII character\n", i);
		i++;
	}
	return (0);
}
*/