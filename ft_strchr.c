/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:09:45 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:23:57 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
	{
		if (str[ctr] == (char)c)
			return ((char *)str + ctr);
		ctr++;
	}
	if (str[ctr] == (char)c)
		return ((char *) str + ctr);
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

- Searching for the Character
    - The function uses a while loop to iterate through characters in string s.
    - Inside the loop:
        - We check if the current character is equal to the target character
	- If c is not found we increment and check the next character
    - If c is found, the function returns the location it was found at.
			
- Handling the Null Terminator
    - There's an extra loop in case the target character is the null terminator
		otherwise the loop would terminate without entering the if condition.
    - Makes sure that if c is the null terminator, the function still returns
		a pointer to it.

- If c is never found we return NULL
*/