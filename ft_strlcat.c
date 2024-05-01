/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:07:29 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:12:52 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

strlcat stands for "String Length Concatenate"
The strlcat function appends the string s2 to the string s1, always
NUL terminating the resulting string.

F u n c t i o n   P r o c e s s :

- Variable Setup
    - dest_len: Stores length of string dest found using ft_strlen.
    - src_len: Stores length of string src found using ft_strlen.
    - total_len: total length of the concatenated string (dest_len + src_len).

- Handling Empty Inputs and Zero Buffer Size
    - The function checks if dest/src are NULL, and if destsize is zero,
		if both conditions are true, the function returns 0.

- Calculating Concatenated String Length
    - The function calculates the total_len by adding the lengths of
		the destination and source strings.

- Checking Destination Buffer Size
    - The function checks if the existing length of dest_len is already equal to
		or greater than the destination buffer size (destsize).
        - If so, it means there's no space in the destination buffer to
			accommodate the entire source string.

- Handling Insufficient Buffer Size
    - If the destination buffer is too small (dest_len >= destsize), the function
		returns a combined length (src_len + destsize). This value represents the
		total length that would have been achieved if the destination buffer
		had enough space.

- Safe Concatenation and Null Termination
	-  If the destination buffer has sufficient space (dest_len < destsize), 
   		the function calls ft_strlcpy to perform safe concatenation.
	- ft_strlcpy copies characters from src to dest + dest_len (the end of the
		existing content in dest).
    - The max number of characters copied is limited to destsize - dest_len - 1
		(Ensures space for null terminator).
    - After copying, the function returns the total_len (calculated earlier),
		which represents the length of the concatenated string.

M a i n   F o r   T e s t i n g : */
/*
#include <stdio.h>

int main()
{
    char str1[] = "String Number One";
    char str2[] = "String Number Two";
	char str3[] = "String Number One";
    char str4[] = "String Number Two";

    printf("Str1: %s\n", str1);
    printf("Str2: %s\n", str2);
    ft_strlcat(str1, str2, 18);
    printf("ft_strlcat Result: %s\n", str1);
    strlcat(str3, str4, 18);
    printf("Strlcat Result: %s\n", str3);
    return 0;
}
*/