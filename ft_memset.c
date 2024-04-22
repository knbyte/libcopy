/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:13:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/22 15:57:00 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		*ptr++ = (unsigned char)c;
	}
	return (s);
}

/*

~ N O T E S ~

F u n c t i o n   I n f o :

We initialize the pointer ptr to the start of the string (s).
Then while n is decrementing by 1 and still greater than 0,
we set the character pointed to by ptr to the value c.
Ptr is incrimented by 1 to move to the next character.
We return the string s.


M a n u a l    P a g e    I n f o :

NAME
    memset -- fill a byte string with a byte value

SYNOPSIS
    #include <string.h>

    void *
    memset(void *b, int c, size_t len);

DESCRIPTION
    The memset() function writes len bytes of value c 
	(converted to an unsigned char) to the string b.

RETURN VALUES
    The memset() function returns its first argument.


M a i n   F u n c t i o n   F o r   T e s t i n g :

int	main(void)
{
	char	str1[10];
	char	str2[10];

	strlcpy(str1, "abcdefghi", sizeof(str1));
	strlcpy(str2, "abcdefghi", sizeof(str2));

	printf("Before ft_memset: %s\n", str2);
	ft_memset(str2, 'x', 5);
	printf("After ft_memset: %s\n", str2);

	return (0);
}

- Declare two character arrays to hold str1 and str2.
- Copy the content of the string literals "abcdefghi" into arrays str1 and str2.
- Print the content of str2 before ft_memset
- Set the first 5 characters of str2 to 'x'
- Print the contect of str2 after ft_memset.

*/