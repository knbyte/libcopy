/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:37:04 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 22:09:39 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

Outputs the string 's' to the given file descriptor followed by a newline.


F u n c t i o n   P r o c e s s :

- Looping through the String
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
    - After attempting to write the character, the pointer s is incremented (s++)
		to move to the next character in the string for the next loop iteration.

- Adding Newline Character:
    - After the loop exits, the function performs an additional write operation.
        - write(fd, "\n", 1): This line writes a single byte (1) from the string
			literal "\n" to the file descriptor.
        - This ensures the output string ends with a newline, making it appear
			on a new line when printed.
*/