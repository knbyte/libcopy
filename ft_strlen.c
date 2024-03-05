/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:12:31 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/05 17:12:25 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	ctr;

	ctr = 0;
	while (str[ctr])
		ctr++;
	return (ctr);
}
#ifdef DO_MAIN

int	main(void)
{
	char	*str;
	int		result;

	str = "Counting string length";
	result = ft_strlen(str);
	printf("The length of the string is %d.\n", result);
	return (0);
}
#endif
// cc -Wall -Wextra -Werror -DDO_MAIN ft_strlen.c