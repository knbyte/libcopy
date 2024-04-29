/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:09:45 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 21:55:05 by emduncan         ###   ########.fr       */
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

- Variable Setup
	- ctr: a counter initialized to 0, used to iterate through the string.

- Searching for the Character
    - The function uses a while loop to iterate through characters in string s.
    - The condition s[ctr] checks we have not reached the end of the string.
		(Ensuring the loop continues until end of the string or target character.
    - Inside the loop:
        - if (s[ctr] == (char)c): This condition checks if the current character
		(s[ctr]) is equal to the target character (c).

- Returning the Character
    - If the target character is found (s[ctr] == (char)c), the function returns
		a pointer to the memory address of that character in the string.
		(This This is achieved by casting &s[ctr] to char*.)
			
- Handling the Null Terminator
    - There's an extra check after the loop (if (s[ctr] == (char)c)) because the
		loop condition doesn't include the null terminator in the iteration.
    - If the target character (c) happens to be the same as the null terminator,
		the loop would terminate without ever entering the if condition.
    - This additional check ensures that even if the target character is the null
		terminator, the function still returns a pointer to it.

- Not Found
    - If the loop completes without finding the target (c), the function returns
		NULL to indicate that the character is not present in the string.
*/