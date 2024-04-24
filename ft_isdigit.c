/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:28:53 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:39:01 by emduncan         ###   ########.fr       */
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
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i < 255)
	{
		if (ft_isdigit(i) == 1)
			printf("%d is a digit\n", i);
		else
			printf("%d is not a digit\n", i);
		i++;
	}
	return (0);
}
*/