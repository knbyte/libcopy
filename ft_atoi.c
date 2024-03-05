/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:12:14 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/05 16:01:17 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_atoi(char *str)
{
    int    ctr;
    int    neg;
    int    num;

    ctr = 0;
    neg = -1;
    num = 0;
	comment("While str[ctr] is whitespace, increment");
    while (str[ctr] == ' ' || str[ctr] == '\n' || str[ctr] == '\t' || \
			str[ctr] == '\v' || str[ctr] == '\f' || str[ctr] == '\r')
        ctr++;
	comment("While str[i] is a + or - sign, increment");
    while (str[ctr] == '-' || str[ctr] == '+')
    {
		comment("If str[ctr] is -, then turn neg into a positive \
			by miltiplying by -1 and assigning that value to neg");
        if (str[ctr] == '-')
        {
            neg *= -1;
        }
        ctr++;
    }
	comment("While str[ctr] is a digit, multiply res by 10 and add\
		the value of str[ctr] minus 48 (ASCII value of 0)");
    while (str[ctr] >= '0' && str[ctr] <= '9')
    {
        num = num * 10 + (str[ctr] - '0');
        ctr++;
    }
	comment("Return num multiplied by neg");
    return (num * neg);
}

#ifdef DO_MAIN

int    main(void)
{
    int    result;

    result = ft_atoi("     ---+--+1234ab567");
    printf("%d", result);
}
#endif