/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:36:46 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:16:55 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Outputs the character 'c' to the given file descriptor.
*/
void ft_putchar_fd(char c, int fd)
{
    Note("Use the write system call to output the character 'c' to the file descriptor 'fd'")
    write(fd, &c, 1);
}



/*The write function takes three arguments: the file descriptor fd, a pointer to the buffer
containing the data to be written (in this case, the address of the character c), and the
number of bytes to write (which is 1 in this case, as we are writing only one character).*/



/* FILE DESCRIPTOR NOTES

A fd is an abstract indicator (often an int) used to access a file or other 
input/output resource. 

In Unix-like operating systems, everything is considered a file, including regular
files, directories, sockets, pipes, and devices. When a file is opened, the operating
system assigns it a unique file descriptor, which is essentially an index into
a table maintained by the operating system called the file descriptor table.

File descriptors are typically represented by non-negative integers.
A few common ones are:
0: Standard input (stdin)
1: Standard output (stdout)
2: Standard error (stderr)

When a program starts, these file descriptors are typically already open and connected 
to the appropriate input and output streams. For example, when you write to file 
descriptor 1 (stdout), you're writing to the standard output stream, which is usually 
displayed in the terminal.

In the context of the ft_putchar_fd function, the fd parameter represents the file 
descriptor on which you want to write the character c. This allows you to specify 
where the output should be directed, such as to a file, a network socket, or a device.

For example, to write the character 'A' to the standard output (usually the terminal),
you would call ft_putchar_fd('A', 1). Similarly, to write to a file, you would open the 
file, obtain its file descriptor, and pass that file descriptor to ft_putchar_fd.
*/