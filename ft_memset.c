/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:13:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:54:10 by emduncan         ###   ########.fr       */
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
#ifdef DO_MAIN

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
#endif
// 	cc -Wall -Wextra -Werror -DDO_MAIN ft_memset.c
*/
/*
MAIN FUNCTION:
Declare two character arrays to hold str1 and str2.
Copy the content of the string literals "abcdefghi" into arrays str1 and str2.
Print the content of str2 before ft_memset
Set the first 5 characters of str2 to 'x'
Print the contect of str2 after ft_memset.
*/