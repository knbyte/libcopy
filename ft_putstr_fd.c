/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:31:47 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:53:57 by emduncan         ###   ########.fr       */
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

Starting at the beginning of the string and looping as long as the current
character isn't null, we write the current character to the file descriptor
and move on to the next character in the string.

M a i n   F o r   T e s t i n g : */
/*
int	main(int argc, char **argv)
{
	int		fd;
	char	*s;

	if (argc != 3)
		return (0);
	fd = atoi(argv[2]);
	s = argv[1];
	ft_putstr_fd(s, fd);
	return (0);
}
*/