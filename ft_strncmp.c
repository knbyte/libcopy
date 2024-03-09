/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:11:31 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:12:06 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    Note("Loop through the characters of the strings until the specified length or until a difference is found");
    for (size_t i = 0; i < n && (str1[i] || str2[i]); i++)
    {
        Note("If characters differ, return the difference");
        if (str1[i] != str2[i])
            return (unsigned char)str1[i] - (unsigned char)str2[i];
    }

    Note("If all characters match within the specified length, return 0");
    return 0;
}

/*
The ft_strncmp function compares the first n characters of two strings, str1 and str2.
It returns an integer less than, equal to, or greater than zero if str1 is found, respectively, to be less than, to match, or be greater than str2.
*/