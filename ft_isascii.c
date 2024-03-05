/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:44:40 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/05 17:09:34 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	return (0);
}

#ifdef DO_MAIN

int	main(void)
{
	printf("All ascii: %d", ft_isascii("h3llo\32W0rld\32:)"));
	printf("Not all ascii: %d", ft_isascii("hé11ö"));
}
#endif
// cc -Wall -Wextra -Werror -DDO_MAIN ft_isascii.c