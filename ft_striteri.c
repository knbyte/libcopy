/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:31 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:42:09 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function 'f' to each character of the string 's', 
passing its index as the first argument. 
Each character is passed by address to 'f' to be modified if necessary.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	ctr;

	ctr = 0;
	note("Check if input string and function pointer is not NULL");
	if (s && f)
	{
		note("Iterate through each character of the string and then \
		apply the function 'f' to the current character and its index");
		while (s[ctr])
		{
			f(ctr, &s[ctr]);
			ctr++;
		}
	}
}
