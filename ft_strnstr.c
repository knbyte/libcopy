/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:13:27 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 14:48:24 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str, const char *substr, unsigned int len)
{
	unsigned int	hay;
	unsigned int	needle;
	char			*result;

	if (len == 0 && !str)
		return ((char *)0);
	result = (char *)str;
	hay = -1;
	if (!substr[0])
		return (result);
	while (result[++hay] && hay < len)
	{
		needle = 0;
		while (result[hay + needle] == substr[needle] && (hay + needle) < len)
		{
			if (!substr[needle + 1])
				return (&result[hay]);
			needle++;
		}
	}
	return ((char *)0);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

strnstr stands for "String N String"
The ft_strnstr function searches for the first occurrence
of a substring within a given string, up to a specified length.
It returns a pointer to the first occurrence of the substring
sin the string, or NULL if the substring is not found.

F u n c t i o n   P r o c e s s :

We declare three variables, hay (haystack), needle, and result.
If len is 0 and str is NULL, we return a null pointer. We then set
result to str and hay to -1. If substr is an empty string, return the
result.

This while loop to search through the haystack - each iteration of the loop it 
ncrements the hay variable, checks if the character at that position in the
haystack is not a null character and if the hay variable is less than the
specified length. If it is not the end of the string and the hay variable
is less than the length, it continues the loop.

Inside the loop, it initializes the needle variable to 0. It then enters another
loop that continues until it reaches the end of the substr string (needle) or
the end of the haystack (needle). Inside this loop, it checks if the character
at the position in the haystack and substr string is the same. If they are the
same and the needle is less than the length of the substr string, it increments
the needle variable.

If it finds a match of the substring within the string, it checks if the next
character in the substr string is a null character.

If it is, it returns a pointer to the position in the haystack where the match
was found. If it reaches the end of the haystack without finding a match,
it returns a null pointer.

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "This is a test string";
	char	*substr = "is";
	char	*result;

	result = ft_strnstr(str, substr, 19);
	if (result)
		printf("Substring found at position %ld\n", result - str);
	else
		printf("Substring not found\n");

	str = "This is a test string";
	substr = "not";
	result = ft_strnstr(str, substr, 19);
	if (result)
		printf("Substring found at position %ld\n", result - str);
	else
		printf("Substring not found\n");

	return (0);
}
*/