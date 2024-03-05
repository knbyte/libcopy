/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:52:25 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/05 17:06:56 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

#ifdef DO_MAIN

int	main(void)
{
	printf("All printable: %d", ft_isprint("h3110w0r1d:)"));
	printf("Not all printable: %d", ft_isprint("h3110w0r1d:)\22"));
}
#endif
// cc -Wall -Wextra -Werror -DDO_MAIN ft_isprint.c