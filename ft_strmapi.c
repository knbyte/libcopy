/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:21:38 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function 'f' to each character of the string 's',
passing its index as the first argument, to create a new 
string resulting from successive applications of 'f'.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*dup_str;
	size_t	ctr;

	len = ft_strlen(s);
	ctr = 0;
	note("Duplicate the input string 's'");
	dup_str = ft_strdup(s);
	if (!dup_str)
		return (NULL);
	note("Apply the function 'f' to each character of the duplicated string");
	while (ctr < len)
	{
		dup_str[ctr] = f(ctr, dup_str[ctr]);
		ctr++;
	}
	note("Return the modified string");
	return (dup_str);
}
