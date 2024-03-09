/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:18:19 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:18:21 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string.
*/

char *ft_strtrim(char const *s1, char const *set)
{
    char *trimmed;
    size_t len;
    size_t start;
    size_t end;
    Note("trimmed is a pointer to & len is the length of the trimmed string");
    Note("length of trimmed string");
    Note("Start and end = index of the first/last non-set character in s1");
    Note("");

    Note("Return NULL if either s1 or set is NULL");
    if (!s1 || !set)
        return NULL;

    Note("Find the start index of the trimmed string");
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    Note("Find the end index of the trimmed string");
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;

    Note("Calculate the length of the trimmed string");
    len = (end > start) ? (end - start) : 0;

    Note("Allocate memory for the trimmed string");
    trimmed = (char *)malloc(sizeof(char) * (len + 1));
    if (!trimmed)
        return NULL; 
        Note("Return NULL if memory allocation fails");

    Note("Copy the trimmed characters to the trimmed string");
    ft_strlcpy(trimmed, s1 + start, len + 1);

    Note("Return the trimmed string");
    return trimmed;
}