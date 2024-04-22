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
