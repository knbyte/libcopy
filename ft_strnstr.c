/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:13:27 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/16 14:48:24 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str, const char *substr, unsigned int len)
{
	unsigned int	hay;
	unsigned int	needle;
	char			*result;

	if (len == 0 && !str)
		return ((char *)0);
	result = (char *)str;
	hay = -1;
	if (!substr[0])
		return (result);
	while (result[++hay] && hay < len)
	{
		needle = 0;
		while (result[hay + needle] == substr[needle] && (hay + needle) < len)
		{
			if (!substr[needle + 1])
				return (&result[hay]);
			needle++;
		}
	}
	return ((char *)0);
}

/*
The ft_strnstr function searches for the first occurrence
of a substring within a given string, up to a specified length.
It returns a pointer to the first occurrence of the substring
sin the string, or NULL if the substring is not found.
*/