/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:13:27 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:41:26 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t length)
{
	size_t	hayctr;
	size_t	needlectr;

	hayctr = 0;
	note("Iterate through haystack until end or until specified length");
	while (haystack[hayctr] && hayctr <= length)
	{
		needlectr = 0;
		note("Compare characters of needle with characters\
		of haystack starting from hayctr");
		while (needle[needlectr] == haystack[hayctr + needlectr])
		{
			note("If the entire needle is found in the haystack,\
			return pointer to start of needle");
			if (needle[needlectr + 1] == '\0')
			{
				return ((char *)(haystack + hayctr));
			}
			note("Move to the next character in both needle and haystack");
			needlectr++;
		}
		note("Move to the next character in haystack");
		hayctr++;
	}
	note("If needle is not found within the specified length, return NULL");
	return (NULL);
}

/*
The ft_strnstr function searches for the first occurrence
of a substring within a given string, up to a specified length.
It returns a pointer to the first occurrence of the substring
sin the string, or NULL if the substring is not found.
*/