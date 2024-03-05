/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:13:24 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/05 20:05:10 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	Note("Declare a character pointer to point to the memory block");

	Note("Cast void pointer to an unsigned char pointer for byte-wise access");
	ptr = (unsigned char *)s;
	Note("Loop through each byte of the memory block");
	while (n-- > 0)
	{
		Note("Set the current byte to the specified value");
		*ptr++ = (unsigned char)c;
	}
	Note("Return the pointer to the memory block");
	return (s);
}

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

/*
MAIN FUNCTION:
Declare two character arrays to hold str1 and str2.
Copy the content of the string literals "abcdefghi" into arrays str1 and str2.
Print the content of str2 before ft_memset
Set the first 5 characters of str2 to 'x'
Print the contect of str2 after ft_memset.
*/