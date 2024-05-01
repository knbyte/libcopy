/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:12:31 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:12:59 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
		ctr++;
	return (ctr);
}

/*
~ N O T E S ~

A b o u t   F u n c t i o n :

strlen stands for "String Length"
The strlen function computes the length of the string s.
It does this by taking one argument, s, and returning the number of characters
that precede the terminating NUL character.


F u n c t i o n   P r o c e s s :

- We initialize a counter variable ctr to 0.

- We then iterate through the string, incrementing the counter
	each time we encounter a character.
	
- We then return the value of the counter.

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>

int main(void)
{
	char str[] = "fish";
	char str2[] = "anotherfish";
	int result = ft_strlen(str);
	int result2 = ft_strlen(str2);
	printf ("length of 'fish': %d\n", result);
	printf ("length of 'anotherfish': %d\n", result2);
	return (0);
}
*/