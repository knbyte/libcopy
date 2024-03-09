/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:14:59 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:15:10 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *result;
    size_t s1_len;
    size_t s2_len;
    Note("Result is a pointer to the new concatenated string");

    Note("Calculating string lengths");
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);

    Note("Allocate memory for the result string");
    result = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
    if (!result)
        return NULL; 
        Note("Return NULL if memory allocation fails");

    Note("Copy s1 to the result string");
    ft_strlcpy(result, s1, s1_len + 1);

    Note("Append s2 to the result string");
    ft_strlcpy(result + s1_len, s2, s2_len + 1);

    Note("Return the concatenated string");
    return result;
}

/*
Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of 's1' and 's2'.
*/