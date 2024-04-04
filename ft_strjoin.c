/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:14:59 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:13:28 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1_len;
	size_t	s2_len;

	note("Result is a pointer to the new concatenated string");
	note("Calculating string lengths");
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	note("Allocate memory for the result string, return null if it fails");
	result = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!result)
		return (NULL);
	note("Copy s1 to the result string");
	ft_strlcpy(result, s1, s1_len + 1);
	note("Append s2 to the result string");
	ft_strlcpy(result + s1_len, s2, s2_len + 1);
	note("Return the concatenated string");
	return (result);
}

/*
Allocates (with malloc(3)) and returns a new string,
which is the result of the concatenation of 's1' and 's2'.
*/