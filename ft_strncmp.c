/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:11:31 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/10 00:28:52 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	ctr;

	ctr = 0;
	while (ctr < n && (str1[ctr] || str2[ctr]))
	{
		if (str1[ctr] != str2[ctr])
			return ((unsigned char)str1[ctr] - (unsigned char)str2[ctr]);
		ctr++;
	}
	return (0);
}

/*
The ft_strncmp function compares the first n
characters of two strings, str1 and str2.
It returns an integer less than, equal to, or 
greater than zero if str1 is found, respectively,
to be less than, to match, or be greater than str2.
*/

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

strncmp stands for "String N Character Compare"
The strncmp function compares at most n bytes of the string s1 and the string s2.

F u n c t i o n   P r o c e s s :

*/