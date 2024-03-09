/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:59:23 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:08:15 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The ft_toupper function converts a lowercase letter to its corresponding uppercase letter.
If the character 'c' is a lowercase letter ('a' to 'z'), it returns the uppercase version of 'c'.
Otherwise, it returns 'c' unchanged.
*/

int ft_toupper(int c)
{
    Note("Check if the character is a lowercase letter ('a' to 'z')");
    if (c >= 'a' && c <= 'z')
    {
        Note("Convert the lowercase letter to its corresponding uppercase letter");
        Note("by subtracting the ASCII difference between lowercase and uppercase ('a' to 'A' = 32)");
        return (c - 32);
    }
    
    Note("If 'c' is not an lowercase letter, return it unchanged");
    return c;
}