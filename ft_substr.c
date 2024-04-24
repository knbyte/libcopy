/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:14:34 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 14:57:11 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned long	ctr;

	if (!s)
		return (NULL);
	if (start >= (unsigned long)ft_strlen((char *)s))
		return (ft_strdup(""));
	if (len > ft_strlen((char *)s) - start)
		len = ft_strlen((char *)s) - start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ctr = 0;
	while (ctr < len && s[start + ctr])
	{
		res[ctr] = s[start + ctr];
		ctr++;
	}
	res[ctr] = '\0';
	return (res);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

Allocates (with malloc(3)) and returns a substring from the string 's'.
The substring begins at index 'start' and is of maximum size 'len'.


F u n c t i o n   P r o c e s s :

We declare two variables, res and ctr. If the string is null, we return NULL.

If the string 's' is null, we return NULL.
If the 'start' index is greater than or equal to the length of the string,
we return an empty string (we use strdup to create a copy of an empty string).
If 'len' is greater than the length of the string starting from 'start', we
set 'len' to be the length of the string starting from 'start'.

We allocate memory for the substring, and if allocation fails, we return NULL.
We initialize 'ctr' to 0 and loop through the substring as long as 'ctr' 
is less than 'len' and the character at 's' + 'start' + 'ctr' is not null.
For each character in the substring, we set the character at 'res' + 'ctr'
to be the character at 's' + 'start' + 'ctr'. We increment 'ctr' and loop again.

After the loop, we set the null terminator at 'res' + 'ctr', then lastly we
return the substring.

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>

int		main(void)
{
	char	*test_string;
	char	*substring;
	size_t	sub_len;
	
	test_string = "Hello, World!";
	sub_len = 5;
	substring = ft_substr(test_string, 7, sub_len);
	if (substring)
	{
		printf("Substring: %s\n", substring);
		free(substring);
	}
	else
		printf("Failed to get substring.\n");
	return (0);
}
*/