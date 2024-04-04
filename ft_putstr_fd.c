/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:31:47 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:12:14 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Outputs the string 's' to the given file descriptor.
*/
void	ft_putstr_fd(char *s, int fd)
{
	note("Iterate through each character of the\
	string until the null terminator is reached");
	while (*s != '\0')
	{
		note("Use the write system call to output the\
		current character to the file descriptor");
		write(fd, s, 1);
		note("Move to the next character in the string");
		s++;
	}
}
