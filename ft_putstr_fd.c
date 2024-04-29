/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:31:47 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 18:47:59 by emduncan         ###   ########.fr       */
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
*/