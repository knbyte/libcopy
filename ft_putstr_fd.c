/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:31:47 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:12:32 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

Outputs the string 's' to the given file descriptor.

F u n c t i o n   P r o c e s s :

- Looping through the String:
	- While loop to iterates through characters in string s until the
		string ends.
	
- Writing to File Descriptor:
   -  Inside the loop:
        - write(fd, s, 1): This line is the core functionality.
            - fd: This is the file descriptor representing the output
				destination (e.g., standard output, a file).
            - s: This is the pointer to the current character in the string s.
            - 1: This indicates the number of bytes to write. In this case,
				we want to write a single character.
        - This write system call attempts to write the character pointed to b
			s to the file descriptor fd.

- Moving to the Next Character:
    - After attempting to write the character, the s is incremented (s++).
		This moves s to point to the next character in the string,
		effectively preparing for the next iteration of the loop.
	
*/