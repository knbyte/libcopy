/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:36:46 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:53:36 by emduncan         ###   ########.fr       */
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

The write function takes three argumentsthe file descriptor, a pointer to 
the buffer containing the data to be written (in this case, the address of
the character c), and the number of bytes to write (which is 1 in this case,
as we are writing only one character).

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