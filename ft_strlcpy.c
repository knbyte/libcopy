/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:06:21 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 16:58:17 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Function to copy and concatenate strings
Copies up to destsize - 1 characters
Returns the length of src, null-terminating the result*/

int	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	srcsize;
	size_t	ctr;

	srcsize = ft_strlen(src);
	ctr = 0;
	if (destsize != 0)
	{
		while (src[ctr] && ctr < (destsize - 1))
		{
			dest[ctr] = src[ctr];
			ctr++;
		}
		dest[ctr] = '\0';
	}
	return (srcsize);
}
