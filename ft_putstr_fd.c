/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:31:47 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:18:34 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Outputs the string 's' to the given file descriptor.
*/
void ft_putstr_fd(char *s, int fd)
{
    Note("Iterate through each character of the string until the null terminator is reached");
    while (*s != '\0')
    {
        Note("Use the write system call to output the current character to the file descriptor");
        write(fd, s, 1);
        
        Note("Move to the next character in the string");
        s++;
    }
}