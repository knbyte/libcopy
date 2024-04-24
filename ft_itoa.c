/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:03 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 14:58:28 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	numlen(int n)
{
	int	ctr;

	ctr = 0;
	if (n < 0)
		ctr++;
	while (n > 9 || n < -9)
	{
		n /= 10;
		ctr++;
	}
	return (ctr + 1);
}

char	*strrev(char *str)
{
	int		ctr1;
	int		ctr2;
	char	temp;

	ctr1 = 0;
	ctr2 = ft_strlen(str) - 1;
	while (ctr1 < ctr2)
	{
		temp = str[ctr2];
		str[ctr2] = str[ctr1];
		str[ctr1] = temp;
		ctr1++;
		ctr2--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			ctr;
	int			sign;

	sign = 1;
	if (n < 0)
		sign = -1;
	res = (char *)malloc(numlen(n) + 1);
	if (!res)
		return (NULL);
	ctr = 0;
	while (n > 9 || n < -9)
	{
		res[ctr++] = (n % 10) * sign + '0';
		n /= 10;
	}
	res[ctr++] = n * sign + '0';
	if (sign == -1)
		res[ctr++] = '-';
	res[ctr] = '\0';
	return (strrev(res));
}

/*

~ N O T E S ~

F u n c t i o n   I n f o :

First we make a function to count the number of digits in the number.
We intitialize the variable ctr to 0. Then we check if the number is
negative. If it is, we increment the ctr by 1. We then loop through
the number until it reaches 0. Each time we divide the number by 10,
we increment the ctr by 1. Finally, we return the ctr.

We then make a function to reverse the string. We initialize three
variables ctr1 to 0, ctr2 to the length of the string minus 1, and
temp as a temporary variable. We then loop through the string until
ctr1 is less than ctr2. We then swap the characters at ctr1 and
ctr2. We then increment ctr1 and decrement ctr2. Finally, we return
the string.

Lastly we have our itoa function. We initialise three variables,
*res (result), ctr, and sign. We set sign to 1, check if the number
is negative. If it is, we set the sign to -1. We then allocate memory
for the string using the numlen function, If the allocation fails,
we return NULL. We then initialize the ctr to 0. In a while loop that
runs as long as the number is greater than 9 or less than -9, we
add the remainder of `n` divided by 10 to the result string at the current
index (ctr). This remainder is multiplied by the `sign`, which is either 1 
or -1, depending on whether `n` is negative. The result is shifted by '0' to
convert it to a character. After this, `n` is divided by 10. The loop continues
until `n` is smaller than 10 and greater than -10, at which point the loop stops.

We null-terminate the string and return it.
*/