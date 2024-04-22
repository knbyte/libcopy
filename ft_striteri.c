/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:31 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:48:43 by emduncan         ###   ########.fr       */
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
	if (s && f)
	{
		while (s[ctr])
		{
			f(ctr, &s[ctr]);
			ctr++;
		}
	}
}
