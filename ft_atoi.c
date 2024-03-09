/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:12:14 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:28:46 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	ctr;
	int	neg;
	int	num;

	ctr = 0;
	neg = -1;
	num = 0;
	while (str[ctr] == ' ' || str[ctr] == '\n' || str[ctr] == '\t' || \
			str[ctr] == '\v' || str[ctr] == '\f' || str[ctr] == '\r')
		ctr++;
	while (str[ctr] == '-' || str[ctr] == '+')
		if (str[ctr++] == '-')
			neg *= -1;
	Note("While str[ctr] is a digit, multiply res by 10 and add\
		the value of str[ctr] minus 48 (ASCII value of 0)");
	while (str[ctr] >= '0' && str[ctr] <= '9')
		num = num * 10 + (str[ctr++] - '0');
	return (num * neg);
}
