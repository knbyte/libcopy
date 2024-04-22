/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 14:46:35 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Applies the function 'f' to each character of the string 's',
passing its index as the first argument, to create a new 
string resulting from successive applications of 'f'.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		ctr;

	if (!s || !f)
		return (NULL);
	res = (char *)malloc(ft_strlen((char *)s) + 1);
	if (!res)
		return (NULL);
	ctr = 0;
	while (s[ctr])
	{
		res[ctr] = f(ctr, s[ctr]);
		ctr++;
	}
	res[ctr] = '\0';
	return (res);
}
