/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:07:29 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 16:30:45 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function to copy and concatenate strings
Copies up to destsize - 1 characters
Returns the length of src, null-terminating the result
*/
int	ft_strlcat(char *dest, const char *src, size_t destsize)

{
	size_t	dest_len;
	size_t	src_len;
	size_t	total_len;

	if ((!dest || !src) && !destsize)
		return (0);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (dest_len >= destsize)
		return (src_len + destsize);
	ft_strlcpy(dest + dest_len, src, destsize - dest_len);
	return (total_len);
}

/*The ft_strlcat function takes a destination buffer dest, a source
string src, and the size of the destination buffer destsize.
It calculates the length of dest and src and checks if the destination
buffer is large enough to accommodate the concatenation.
If the destination buffer is too small, it returns the length that
would have been copied if the buffer were large enough.
Otherwise, it copies characters from src to dest, ensuring null
termination, and returns the total length of the concatenated string.*/