/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:16:26 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function 'f' to each character of the string 's', passing its index as the first argument, to create a new string resulting from successive applications of 'f'.
*/
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    Note("Calculate the length of the input string 's'");
    size_t len = ft_strlen(s);

    Note("Duplicate the input string 's'");
    char *dup_str = ft_strdup(s);
    if (!dup_str)
        return NULL;

    Note("Apply the function 'f' to each character of the duplicated string");
    for (size_t i = 0; i < len; i++)
    {
        dup_str[i] = f(i, dup_str[i]);
    }

    Note("Return the modified string");
    return dup_str;
}