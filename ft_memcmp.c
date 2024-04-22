/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:12:49 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 14:43:52 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *str1, const void *str2, unsigned long n)
{
	unsigned long	ctr;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	ctr = 0;
	if (n == 0)
		return (0);
	while (s1[ctr] == s2[ctr] && (ctr < n - 1))
		ctr++;
	return (s1[ctr] - s2[ctr]);
}
// Line 26: iterate through both strings until they are not equal
// or until the end of the string is reached.
// If they aren't equal, return the difference
// between the two strings at the current index.
// If the end of the string is reached, return the
// difference between the two strings at the current index.
// If the end of the string is reached, return 0.