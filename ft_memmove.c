/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:06:02 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 17:08:34 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dest_ptr);
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

memmove stands for "Memory Move"
The memmove function moves n bytes from the object pointed to by s2 into the
object pointed to by s1.


F u n c t i o n   P r o c e s s :

We initialise dest_ptr to the destination pointer (dest). Then we check if the
destination and source pointers are both NULL. If they are, we return NULL.

If the destination and source pointers are the same, we return the destination.

We use a while loop while decrementing n to copy n bytes from the source
string to the destination string. We use the *(char *) operator to convert
the pointer to a char and increment the pointers by 1 byte.

If the destination pointer is before the source pointer, we copy from the end to the
beginning to avoid overwriting the source data before it's copied. If the destination
pointer is after the source pointer, we copy from the beginning to the end.

*/