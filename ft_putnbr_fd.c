/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:36:15 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:17:21 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char    c;

    if (n == INT_MIN)
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n; Note("Convert negative number to positive for further processing");
    }
    if (n / 10)
    {
        ft_putnbr_fd(n / 10, fd);
    }
    c = n % 10 + '0'; Note("Convert the last digit to ASCII character");
    write(fd, &c, 1); Note("Write the digit to the file descriptor");
}