/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:14:59 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:48:26 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, s1_len + 1);
	ft_strlcpy(result + s1_len, s2, s2_len + 1);
	return (result);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

Allocates (with malloc(3)) and returns a new string, which
is the result of the concatenation of ’s1’ and ’s2’.

If the allocation fails, the function returns NULL.

F u n c t i o n   P r o c e s s :

We declare three variables, result, s1_len, and s2_len. We initialize
s1_len to the length of the string s1, and s2_len to the length of
the string s2. We allocate memory for the result string using the
malloc function, we allocate enough space for the contents of s1 and s2.
If the result is NULL, we return NULL. Otherwise, we use the ft_strlcpy
function to copy the contents of s1 into the result string. We add 1 to
s1_len to account for the null terminator. We then use the ft_strlcpy
function to do the same with s2, lastly we return the result string.

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str1;
	char	*str2;
	char	*result;

	str1 = "Hello, ";
	str2 = "World!";

	result = ft_strjoin(str1, str2);

	if (!result)
	{
		printf("Error: malloc failed\n");
		return (1);
	}

	printf("%s\n", result);
	free(result);

	return (0);
}
*/