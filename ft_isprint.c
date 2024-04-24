/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:52:25 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:42:55 by emduncan         ###   ########.fr       */
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
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i < 255)
	{
		if (ft_isprint(i) == 1)
			printf("%d is a printable character\n", i);
		else
			printf("%d is not a printable character\n", i);
		i++;
	}
	return (0);
}
*/