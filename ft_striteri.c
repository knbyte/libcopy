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

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

This function applies a function called 'f' to each character in a string (s). 
The first argument that 'f' gets is the index of the character in the string, 
and the second argument is the address of the character itself.
Each character is passed by address to ’f’ to be modified if necessary.

F u n c t i o n   P r o c e s s :

We declare a variable 'ctr' and initialize it to 0. We check if the string
and the function pointers are not NULL. If they are, we use a while loop
to iterate through the string and apply the function to each character.

M a i n   F o r   T e s t i n g : */
/*
*/