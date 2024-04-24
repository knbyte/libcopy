/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:28:06 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:38:24 by emduncan         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
		return (0);
	while (argv[1][i])
	{
		if (ft_isalpha(argv[1][i]) == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
*/