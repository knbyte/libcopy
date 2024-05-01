/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:14:10 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:03:40 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		ctr;

	ctr = 0;
	while (src[ctr])
		ctr++;
	dest = (char *)malloc(sizeof(char) * (ctr + 1));
	if (dest == NULL)
		return (NULL);
	ctr = 0;
	while (src[ctr])
	{
		dest[ctr] = src[ctr];
		ctr++;
	}
	dest[ctr] = '\0';
	return (dest);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

strdup stands for "String Duplicate"
The strdup function allocates sufficient memory for a copy of
the string s1, does the copy, and returns a pointer to it.

F u n c t i o n   P r o c e s s :

- Calculates String Length
    - Uses a while loop to iterate through src & count.

- Memory Allocation
    - allocates enough memory for a copy of the string plus null terminator.
    - If malloc fails to allocate memory, the function returns NULL.

- Copying the String:
    - Resets the counter ctr to 0.
    - Uses while loop to iterate through and copy each character.
    - Increment to move to the next character in both strings.

- Null Termination & Returning Result
    - After the copying, a null terminator is added to the end of string.
	- Returns the pointer dest which points to the copy of src

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>
#include <strings.h>

int    main(void)
{
    char    *src;
    char    *dst;
	char	*dst2;

    src = "Source";
    dst = ft_strdup(src);
	dst2 = strdup(src);
    printf("ft_strdup result: %s\n", dst);
	printf("regular strdup result: %s\n", dst2);
    return (0);
}
*/