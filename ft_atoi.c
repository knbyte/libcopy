/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:38:20 by emduncan          #+#    #+#             */
/*   Updated: 2024/02/14 21:38:45 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
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
	{
		if (str[ctr] == '-')
		{
			neg *= -1;
		}
		ctr++;
	}
	while (str[ctr] >= '0' && str[ctr] <= '9')
	{
		num = num * 10 + (str[ctr] - '0');
		ctr++;
	}
	return (num * neg);
}
