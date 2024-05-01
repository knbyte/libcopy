/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:11:31 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:18:34 by emduncan         ###   ########.fr       */
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

- Variable Declaration
	- ctr, counter variable set it to 0.

- Looping for Character Comparison:
    - The function uses a while loop to iterate throughboth strings.
    - The loop continues as long as two conditions are met:
        - The counter is less than the specified n.
        - At least one of the strings hasnt reached null.

- Character Matching and Mismatch
        - If the characters at the current index in both strings are equal,
		we intrement and loop through again. If no mismatch is encountered
		the function returns 0 it indicate equal strings.
		
		- If the characters are not equal:
            - cast both characters to unsigned char, ensuring
				the difference calculation results in an unsigned integer.
            - return the difference between the characters in each string
			at the current index.


M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>

int main()
{ 
    char    str1[] = "Tired";
    char    str2[] = "TireD";

    int result = ft_strncmp(str1, str2, 5);
	int result2 = strncmp(str1, str2, 5);
    printf("My ft_strncmp: %d\n", result);
	printf("Regular strncmp: %d\n", result2);
}
*/