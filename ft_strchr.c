/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:09:45 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 14:45:26 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strchr function searches for the first occurrence of 
the character c (an unsigned char) in the string pointed to by s (string).
It returns a pointer to the first occurrence of c in s, 
or NULL if c is not found.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	ctr;

	ctr = 0;
	while (s[ctr])
	{
		if (s[ctr] == (char)c)
			return ((char *)&s[ctr]);
		ctr++;
	}
	if (s[ctr] == (char)c)
		return ((char *)&s[ctr]);
	return (NULL);
}
