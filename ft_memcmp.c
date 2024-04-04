/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:12:49 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/25 18:55:47 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ctr;

	if (n == 0)
		return (0);
	ctr = 0;
	note("Iterate through strs up to n characters or until difference found");
	while (s1[ctr] && s1[ctr] == s2[ctr])
	{
		if (ctr < n - 1)
			ctr++;
		else
			return (0);
	}
	return ((unsigned char)s1[ctr] - (unsigned char)s2[ctr]);
}

// Compare up to n characters of two strings
// Returns:
//   - 0 if the strings are equal up to the specified length
//   - Negative value if s1 is less than s2
//   - Positive value if s1 is greater than s2