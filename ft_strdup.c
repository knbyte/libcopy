/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:14:10 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 21:46:53 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		ctr;

	ctr = 0;
	while (src[ctr] != '\0')
		ctr++;
	dest = (char *)malloc(sizeof(char) * (ctr + 1));
	if (dest == NULL)
		return (NULL);
	ctr = 0;
	while (src[ctr] != '\0')
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

- Variable Setup
    - ctr: counter initialized to 0, tracking string length.
    - dest: pointer that will hold the address of the
		allocated memory for the copied string.

- Calculating String Length:
    - The function first uses a while loop to iterate through the source string
		and count the number of characters (excluding the null terminator).
	- This loop continues as long as the character at the current index (ctr)
		in src is not the null terminato. The counter ctr is incremented
		within the loop to keep track of the length.

- Memory Allocation:
    - Once the loop exits, the ctr variable holds the length of the string.
    - enough memory for a copy of the string is allocated with malloc
		- It allocates space for ctr characters (plus 1 for the null terminator).
    - If malloc fails to allocate memory, the function returns NULL.

- Copying the String:
    - The function resets the counter ctr to 0 again.
    - It then uses another while loop to iterate through the string (src)
		and copy each character into the allocated memory pointed to by dest.
       - Inside the loop:
            - The character from the current position is copied to the
				corresponding position in dest.
            - ctr is incremented to move to the next character in both strings.

- Null Termination & Returning Result
    - After the copying loop finishes, a null terminator is
		added to the end of the string.
	- Returns the pointer dest which points to the newly allocated memory
		containing the complete copy of the source string src

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