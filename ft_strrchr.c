/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:10:48 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:15:42 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strrchr function searches for the last occurrence of
the character c (an unsigned char) in the string pointed to by str.
It returns a pointer to the last occurrence of c in str,
or NULL if c is not found.
*/

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_occurrence;

	last_occurrence = NULL;
	note("Initialize pointer to store the last occurrence then \
	loop through each character of the string until the null terminator");
	while (*str != '\0')
	{
		note("If the current character matches the target character,\
		update the ptr to the last occurrence, then move to next character.");
		if (*str == (char)c)
			last_occurrence = str;
		str++;
	}
	note("If the target character is found, return a pointer \
	to the last occurrence; otherwise, return NULL");
	return ((char *)last_occurrence);
}
