/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:14:10 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:13:06 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		ctr;

	ctr = 0;
	note("Count through source string to find size, \
		then allocate that amount of memory to the destination string.");
	while (src[ctr++])
		dest = malloc(sizeof(char) * ctr);
	ctr = 0;
	note("If insufficient memory is available, NULL is returned");
	if (!dest)
		return (0);
	else
	{
		note("After allocating memory - strcpy source to destination, \
			NUL terminate and then return the copied string (destination)");
		while (src[ctr++])
		{
			dest[ctr] = src[ctr];
		}
		dest[ctr] = '\0';
		return (dest);
	}
}

/*
 MANUAL EXERPT:

 The strdup() function allocates sufficient memory for a copy of the
 string s1, does the copy, and returns a pointer to it. 

 The strndup() function copies at most n characters from the string s1
 always NUL terminating the copied string.

*/