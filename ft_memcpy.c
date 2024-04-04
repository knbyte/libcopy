/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:06:38 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 21:56:19 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/syslimits.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		ctr;

	d = dest;
	s = src;
	if (s < d && d < s + n)
	{
		ctr = n;
		while (ctr != 0)
		{
			ctr--;
			d[ctr] = s[ctr];
		}
	}
	else
	{
		ctr = 0;
		while (ctr < n)
		{
			d[ctr] = s[ctr];
			ctr++;
		}
	}
	return (dest);
}
