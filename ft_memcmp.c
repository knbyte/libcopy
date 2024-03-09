/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:12:49 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:13:16 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t ctr;

    ctr = 0;
    Note("Iterate through the strings up to n characters or until a difference is found");
    while (ctr < n && str1[ctr] && str2[ctr] && str1[ctr] == str2[ctr])
        ctr++;

    Note("Check if we've reached the end of the comparison or the specified length");
    if (ctr == n)
        return 0;
        Note("Strings are equal up to n characters");
    else
        Note("Return the difference between the current characters");
        return ((unsigned char)str1[ctr] - (unsigned char)str2[ctr]);
}

// Compare up to n characters of two strings
// Returns:
//   - 0 if the strings are equal up to the specified length
//   - Negative value if str1 is less than str2
//   - Positive value if str1 is greater than str2