/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:36:15 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 22:24:20 by emduncan         ###   ########.fr       */
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

- Handling Special Cases
    - The function first tackles two special cases before the general logic:
        - If n is the minimum representable integer (INT_MIN), directly writing
			the string "-2147483648" to the fd using write.
        - If n is negative, a minus sign is written to the file descriptor using
			write, and n is converted to its positive equivalent.

- Recursive Conversion (if needed)
	- If (n / 10): This condition checks if n is divisible by 10. If it is, it
		means n has multiple digits.
    - In this case the fuction calls itself recursively with n divided by 10.
		This recursive call handles the higher-order digits of n.

- Converting Digit to Character
    - c = n % 10 + '0': This line performs two operations:
        - Calculates the remainder to isolate the last digit of n.
        - The remainder is then added to the ASCII value of '0' (which is 48),
			converting it to its corresponding ASCII character representation.

- Writing the Digit Character
    - The converted character c is written to the file descriptor fd.
*/