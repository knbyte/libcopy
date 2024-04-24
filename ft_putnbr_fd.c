/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:36:15 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:53:41 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n / 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	c = n % 10 + '0';
	write(fd, &c, 1);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

Outputs the integer ’n’ to the given file descriptor.


F u n c t i o n   P r o c e s s :

We declare a character variable 'c'. First we handle the case where 'n' is
integer min, then if 'n' is negative, we write a minus sign to the file
descriptor.

Then if n is divisible by 10 we call the function again with n divided by 10
as the argument so that we can get the next digit.

Then we convert n to a character by adding '0'. Lastly, we write the character
to the file descriptor.

M a i n   F o r   T e s t i n g : */
/*
int		main(int argc, char **argv)
{
	int			n;
	int			fd;

	if (argc != 3)
		return (0);
	n = atoi(argv[1]);
	fd = atoi(argv[2]);
	ft_putnbr_fd(n, fd);
	return (0);
}
*/