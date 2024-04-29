/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:36:46 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 22:04:25 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

Outputs the character 'c' to the given file descriptor.

	(A fd is an abstract indicator (often an int) used to access a file or
	other  input/output resource, typically represented by non-negative
	integers.

	In the context of the ft_putchar_fd function, the fd parameter represents
	the file descriptor on which you want to write the character c.)

F u n c t i o n   P r o c e s s :

- ft_putchar_fd focuses on writing a single character (c) to a specified
		ile descriptor (fd).

- Write Arguments:
        - fd: This is the file descriptor representing the output destination
			(e.g., standard output, a file).

        - buffer: This is a pointer to the memory buffer containing the data
			to be written - in this case the address of the character c (&c).

        - count: This is the number of bytes to write from the buffer, in
			this case 1 byte.

M a i n   F o r   T e s t i n g : */
/*
int	main(void)
{
	char	c;
	int		fd;

	c = 'a';
	fd = 1;
	ft_putchar_fd(c, fd);
	return (0);
}
*/