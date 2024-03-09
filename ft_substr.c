/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:14:34 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:14:46 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t s_len;
    char *substr;

    Note("If s is NULL or start is beyond the length of s, return NULL");
    if (!s || start >= ft_strlen(s))
        return NULL;

    Note("Calculate the length of s");
    s_len = ft_strlen(s);

    Note("Adjust len if it exceeds the remaining characters after start");
    if (len > s_len - start)
        len = s_len - start;

    Note("Allocate memory for the substring");
    substr = (char *)malloc(sizeof(char) * (len + 1));
    if (!substr)
        return NULL;

    Note("Copy the substring from s to substr");
    ft_memcpy(substr, s + start, len);
    
    Note("Null-terminate the substring");
    substr[len] = '\0';

    Note("Return the allocated substring");
    return substr;
}

/*
Allocates (with malloc(3)) and returns a substring from the string 's'.
The substring begins at index 'start' and is of maximum size 'len'.
*/