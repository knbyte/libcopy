/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:09:45 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 14:45:26 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	ctr;

	ctr = 0;
	while (s[ctr])
	{
		if (s[ctr] == (char)c)
			return ((char *)&s[ctr]);
		ctr++;
	}
	if (s[ctr] == (char)c)
		return ((char *)&s[ctr]);
	return (NULL);
}


/*

~ N O T E S ~

A b o u t   F u n c t i o n :

strchr stands for "String Character Copy"
The strchr function locates the first occurrence of c (converted to an unsigned
char) in the string s. It returns a pointer to the first occurrence of c in s, 
or NULL if c is not found.


F u n c t i o n   P r o c e s s :

We declare a counter variable to count the number of characters in the string,
and set it to 0. We then use a while loop to count through the string until
we reach the null character. We then check if the current character in the
string is equal to the character we are looking for. If it does, we return a
pointer to the current character. If it doesn't, we increment the counter
by 1 and repeat the loop. If we reach the end of the string and we haven't
found the character, we return NULL.

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	*ptr;

	if (argc != 3)
	{
		printf("Usage: %s <string> <char>\n", argv[0]);
		return (0);
	}
	str = argv[1];
	ptr = ft_strchr(str, *argv[2]);
	if (!ptr)
		printf("%s was not found in %s\n", argv[2], str);
	else
		printf("The first occurence of %s in %s is at %p\n", argv[2], str, (void*)ptr);
	return (0);
}
*/