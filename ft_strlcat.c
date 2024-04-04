/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:07:29 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:14:20 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/_types/_size_t.h>

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

	note("Check if dest or src is NULL, return 0");
	if (!dest || !src)
		return (0);
	note("Calculate the length of dest and src");
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	note("Calculate the total length including null terminator");
	total_len = dest_len + src_len;
	note("Check if the destination buffer is too small");
	if (dest_len >= destsize)
		return (src_len + destsize);
	note("Copy characters from src to dest, ensuring null termination");
	ft_strlcpy(dest + dest_len, src, destsize - dest_len);
	note("Return the total length of the concatenated string");
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