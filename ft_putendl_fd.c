/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:37:04 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:45:52 by emduncan         ###   ########.fr       */
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

Starting at the beginning of the string and looping as long as the current
character isn't null, we write the current character to the file descriptor
and move on to the next character in the string.

After we've written all the characters in the string, we add a newline
character to the file descriptor.

M a i n   F o r   T e s t i n g : */
/*
int	main(int argc, char **argv)
{
	int		fd;

	if (argc != 3)
		return (0);
	fd = atoi(argv[2]);
	ft_putendl_fd(argv[1], fd);
	return (0);
}
*/