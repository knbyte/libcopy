/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:12:37 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 18:48:41 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*point;
	unsigned char		chr;

	point = s;
	chr = (unsigned char)c;
	while (n-- > 0)
	{
		if (*point == chr)
			return ((void *)point);
		point++;
	}
	return (NULL);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

memchr stands for "Memory Character Copy"
The memchr function locates the first occurrence of c (converted to an unsigned
char) in the first n bytes of the object pointed to by s.


F u n c t i o n   P r o c e s s :

We declare two variables, *point, which is a pointer to the memory block and
chr, which is the character to search for. We set point to s and chr to c. 
For chr we specify the type as an unsigned char.

We then iterate through the memory block pointed to by point until we reach the
end of the block or until we find the character to search for.

If we find the character to search for, we return the pointer to the memory
block that contains the character. Otherwise, we return NULL.
*/