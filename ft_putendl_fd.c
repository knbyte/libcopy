/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:37:04 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:17:10 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Outputs the string 's' to the given file descriptor followed by a newline.
*/
void ft_putendl_fd(char *s, int fd)
{
    // Iterate through each character of the string until the null terminator is reached
    while (*s != '\0')
    {
        // Use the write system call to output the current character to the file descriptor
        write(fd, s, 1);
        
        // Move to the next character in the string
        s++;
    }
    
    // After outputting the string, write a newline character to the file descriptor
    write(fd, "\n", 1);
}