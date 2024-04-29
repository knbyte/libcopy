/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:09:45 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 18:58:25 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	ctr;

	ctr = 0;
	while (s[ctr])
	{
		if (s[ctr] == (char)c)
			return ((char *)&s[ctr]);
		ctr++;
	}
	if (s[ctr] == (char)c)
		return ((char *)&s[ctr]);
	return (NULL);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

strchr stands for "String Character Copy"
The strchr function locates the first occurrence of c (converted to an unsigned
char) in the string s. It returns a pointer to the first occurrence of c in s, 
or NULL if c is not found.


F u n c t i o n   P r o c e s s :

We declare a counter variable to count the number of characters in the string,
and set it to 0. We then use a while loop to count through the string until
we reach the null character. We then check if the current character in the
string is equal to the character we are looking for. If it does, we return a
pointer to the current character. If it doesn't, we increment the counter
by 1 and repeat the loop. If we reach the end of the string and we haven't
found the character, we return NULL.

*/