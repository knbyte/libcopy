/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:11:31 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/10 00:28:52 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	ctr;

	ctr = 0;
	while (ctr < n && (str1[ctr] || str2[ctr]))
	{
		if (str1[ctr] != str2[ctr])
			return ((unsigned char)str1[ctr] - (unsigned char)str2[ctr]);
		ctr++;
	}
	return (0);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

strncmp stands for "String N Character Compare"
The strncmp function compares at most n bytes of the string s1 and the string s2.
It returns an integer less than, equal to, or greater than zero if str1 is found,
respectively, to be less than, to match, or be greater than str2.

F u n c t i o n   P r o c e s s :

We declare a ctr variable and set it to 0. We then use a while loop to
compare the characters of the two strings until we reach the end of the string
or until we reach n characters. If the characters are equal, we increment the
counter by 1. If the characters are not equal, we return the difference
between the two characters at the current index (ctr).

We return 0 if the strings are equal.

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>

int		main(void)
{
	const char	str1[] = "abcdef";
	const char	str2[] = "abcghi";
	size_t		n = 6;
	int			res;

	res = ft_strncmp(str1, str2, n);
	printf("'%s' '%s': %d\n", str1, str2, res);
	n = 3;
	res = ft_strncmp(str1, str2, n);
	printf("'%s' '%s': %d\n", str1, str2, res);
	n = 8;
	res = ft_strncmp(str1, str2, n);
	printf("'%s' '%s': %d\n", str1, str2, res);
	return (0);
}
*/