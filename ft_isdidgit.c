/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdidgit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:28:53 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/05 16:44:45 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

#ifdef DO_MAIN

int    main(void)
{
    printf("All digit: %d", ft_isdigit("43110"));
    printf("Not all digit: %d", ft_isdigit("h3110"));
}
#endif
// cc -Wall -Wextra -Werror -DDO_MAIN ft_isdigit.c