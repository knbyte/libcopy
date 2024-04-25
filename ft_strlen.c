/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:12:31 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/25 18:32:29 by emduncan         ###   ########.fr       */
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

We initialize a counter variable ctr to 0. We then iterate through the
string, incrementing the counter each time we encounter a character. We
then return the value of the counter.

M a i n   F o r   T e s t i n g : */
/*
int		main(void)
{
	char	*test_string;
	int		len;

	test_string = "This is a test string";
	len = ft_strlen(test_string);
	printf("The length of the string \"%s\" is %d\n", test_string, len);
	return (0);
}
*/