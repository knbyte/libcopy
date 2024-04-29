/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:10:48 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 20:12:15 by emduncan         ###   ########.fr       */
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

- Variable Declaration:
	- ctr: ctr for length of string s found with ft_strlen.
    - *start: pointer to the beginning of the string s.

- Searching from the End Backward
	- The loop condition ctr >= 0 ensures the loop iterates through the
		entire string, including the null terminator
    - Inside the loop:
        - *(s + ctr) dereferences the character at the address s + ctr.
			(This allows us to take characters from the end of the string.)
        - It checks if the character at the (ctr) is equal to the target c.
            (Casting c to char ensures consistent type comparison.)
        - If the characters match, the function returns a pointer to that
			character's position in the string using (char *)s + ctr.
		- The counter is decremented to move to the next character
		
- Handling Character Not Found:
	- If the loop completes without finding a match NULL is returned.


A   N o t e   O n   D e r e f e r e n c e s :

    *  -   This asterisk is like a special tool that lets you peek inside 
	whatever the pointer points to. In this case, you're using the pointer
	s + ctr to reach a specific tile, and the asterisk lets you see the
	letter written	on that tile.

	So, the entire expression *(s + ctr) basically means:
    	- Start at the beginning of the box (s).
    	- Move ahead a certain number of tiles based on the counter (ctr).
    	- Use the asterisk like a peek tool to see the letter written on
		that specific tile.

	Dereferencing with the asterisk basically tells the computer to stop
	treating s + ctr as a pointer and instead look at the value stored at
	the memory address it points to. 
*/