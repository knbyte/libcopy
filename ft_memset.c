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

A b o u t   F u n c t i o n :

memset stands for "Memory Set"
The memset function sets the first n bytes of the string s to c,
converted to an unsigned char.s
It does this by taking three arguments, s, c, and n.


F u n c t i o n   P r o c e s s :

We initialize the pointer ptr to the start of the string (s).
Then while n is decrementing by 1 and still greater than 0,
we set the character pointed to by ptr to the value c.
Ptr is incrimented by 1 to move to the next character.
We return the string s.




M a i n   F o r   T e s t i n g : */

/*
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
*/