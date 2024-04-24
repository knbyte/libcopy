/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:10:48 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 14:58:13 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strrchr function searches for the last occurrence of
the character c (an unsigned char) in the string pointed to by str.
It returns a pointer to the last occurrence of character c in,
 string s or NULL if c is not found.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			ctr;
	const char	*start;

	ctr = ft_strlen(s);
	start = s;
	while (ctr >= 0)
	{
		if (*(s + ctr) == (char)c)
			return ((char *)s + ctr);
		ctr--;
	}
	return (NULL);
}


/*

~ N O T E S ~

A b o u t   F u n c t i o n :

strrchr stands for "String Reverse Character Copy"
The strrchr function locates the last occurrence of c (converted to an
unsigned char) in the string s.


F u n c t i o n   P r o c e s s :

We declare two variables, ctr which we set to the length of the string
using ft_strlen and start, which we set to the address of the string.

While ctr is greater than or equal to 0, we check if the character at
the address of s + ctr is equal to c. If it is, we return the address
of s + ctr. Otherwise we decrement ctr and loop again.

We return NULL if c is not found in the string.
*/