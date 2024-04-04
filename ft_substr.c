/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:14:34 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:47:07 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substr;

	note("If s is NULL or start is beyond the length of s, return NULL");
	if (!s || start >= ft_strlen(s))
		return (NULL);
	s_len = ft_strlen(s);
	note("Adjust len if it exceeds the remaining characters after start");
	if (len > s_len - start)
		len = s_len - start;
	note("Allocate memory for the substring");
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	note("Copy the substring from s to substr");
	ft_memcpy(substr, s + start, len);
	note("Null-terminate the substring");
	substr[len] = '\0';
	note("Return the allocated substring");
	return (substr);
}

/*
Allocates (with malloc(3)) and returns a substring from the string 's'.
The substring begins at index 'start' and is of maximum size 'len'.
*/