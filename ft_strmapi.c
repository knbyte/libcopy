/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 14:46:35 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		ctr;

	if (!s || !f)
		return (NULL);
	res = (char *)malloc(ft_strlen((char *)s) + 1);
	if (!res)
		return (NULL);
	ctr = 0;
	while (s[ctr])
	{
		res[ctr] = f(ctr, s[ctr]);
		ctr++;
	}
	res[ctr] = '\0';
	return (res);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

Applies the function 'f' to each character of the string 's',
passing its index as the first argument, to create a new 
string resulting from successive applications of 'f'.


F u n c t i o n   P r o c e s s :

We declare two variables, res and ctr, which are pointers to the
resulting string and the current index respectively.
We then allocate memory for the resulting string and use the ft_strlen
function to get the length of the string + 1 for the null terminator.
We use a while loop to iterate through the string.

We check if the string and the function pointers are not NULL, then
set the counter to 0. We use a while loop to iterate through the string and
apply the function to each character. We then increment the counter and repeat.

We assign the null terminator to the end of the string and return the
resulting string.

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>
#include <stdlib.h>

char	mapper(unsigned int idx, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

int		main(void)
{
	char	*res;
	char	*s = "hello world";

	res = ft_strmapi(s, &mapper);
	if (!res)
	{
		printf("Failed to map string\n");
		return (1);
	}
	printf("Mapped string is: %s\n", res);
	free(res);
	return (0);
}
*/