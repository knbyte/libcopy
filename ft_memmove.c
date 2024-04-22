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
Explanation:
ft_memmove takes three arguments: the destination pointer (dest), 
the source pointer (src), and the number of bytes to copy (n).

Like ft_memcpy, it uses char* pointers to allow byte-wise manipulation of memory.

It checks if the regions overlap. If they do, it copies from
 the end to the beginning to avoidoverwriting the source data before it's copied.
 If they don't overlap, it copies from the beginning to the end.

Finally, it returns the destination pointer.

This implementation ensures safe copying even if the memory regions overlap, 
making it suitable for all cases where you might need to copy memory blocks.
*/