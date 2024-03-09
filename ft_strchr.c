/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:09:45 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:10:14 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_strchr function searches for the first occurrence of the character c (an unsigned char) in the string pointed to by str.
It returns a pointer to the first occurrence of c in str, or NULL if c is not found.
*/

char *ft_strchr(const char *str, int c)
{
    Note("Loop through each character of the string until the null terminator");
    while (*str != '\0')
    {
        Note("If the current character matches the target character, return a pointer to it");
        if (*str == (char)c)
            return (char *)str;
        Note("Move to the next character");
        str++;
    }

    Note("If the target character is not found, return NULL");
    return NULL;
}
