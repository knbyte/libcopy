/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:14:10 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 14:45:58 by emduncan         ###   ########.fr       */
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
 MANUAL EXERPT:

 The strdup() function allocates sufficient memory for a copy of the
 string s1, does the copy, and returns a pointer to it. 

 The strndup() function copies at most n characters from the string s1
 always NUL terminating the copied string.

*/