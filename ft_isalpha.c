/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:28:06 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/05 16:36:02 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

#ifdef DO_MAIN

int	main(void)
{
	printf("All alpha: %d", ft_isalpha("hello"));
	printf("Not all alpha: %d", ft_isalpha("hello9"));
}
#endif
// cc -Wall -Wextra -Werror -DDO_MAIN ft_isalpha.c