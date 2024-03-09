/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 20:58:39 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:08:34 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The ft_tolower function converts an uppercase letter to its corresponding lowercase letter.
If the character 'c' is an uppercase letter ('A' to 'Z'), it returns the lowercase version of 'c'.
Otherwise, it returns 'c' unchanged.
*/

int ft_tolower(int c)
{
    Note("Check if the character is an uppercase letter ('A' to 'Z')");
    if (c >= 'A' && c <= 'Z')
    {
        Note("Convert the uppercase letter to its corresponding lowercase letter");
        Note("by adding the ASCII difference between uppercase and lowercase ('A' to 'a' = 32)");
        return (c + 32);
    }
    
    Note("If 'c' is not an uppercase letter, return it unchanged");
    return c;
}
