/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:31 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:16:36 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function 'f' to each character of the string 's', passing its index as the first argument. 
Each character is passed by address to 'f' to be modified if necessary.
*/
void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    Note("Check if the input string is not NULL and the function pointer is not NULL");
    if (s && f)
    {
        Note("Iterate through each character of the string");
        for (unsigned int i = 0; s[i]; i++)
        {
            Note("Apply the function 'f' to the current character and its index");
            f(i, &s[i]);
        }
    }
}