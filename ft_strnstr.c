/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:13:27 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/29 19:13:10 by emduncan         ###   ########.fr       */
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

~ N O T E S ~

A b o u t   F u n c t i o n :

strnstr stands for "String N String"
The ft_strnstr function searches for the first occurrence
of a substring within a given string, up to a specified length.
It returns a pointer to the first occurrence of the substring
sin the string, or NULL if the substring is not found.

F u n c t i o n   P r o c e s s :

- Variable Declaration:
	- hay (haystack), needle, and result

- Handle Empty String or Zero Length
	- If len is 0 and str (haystack) is NULL, the function returns a null
	pointer ((char *)0), indicating an invalid search scenario.

- Handle Empty Substring
	- If the first character of substr (substr[0]) is null, it implies an
		empty substring. In this case, the function returns the original
		result (which points to the beginning of the haystack string),
		indicating a match for an empty substring anywhere in the haystack.

- Outer Loop: Search Haystack String (Limited by len)
	- Iterates through the haystack string (str) using the hay index.
	- The loop continues as long as:
		- The character at the current position (result[++hay]) in the haystack
			is not null (not the end of the string).
        - The current position (hay) is less than the specified len .
    - If either condition is not met, the loop exits, indicating no match found.

- Inner Loop: Compare Characters in Substring and Haystack
    - Inside the outer loop, a nested loop is used for comparison.
		- Iterates through the substring (substr) using the needle index.
        - The loop continues as long as:
            - The character at the current position (hay +needle) in the haystack
				(result) is the same as the character at the current position 
				(needle) in the substring (substr).
            - The combined index (hay + needle) is less than the specified length
        - If either condition is not met, the inner loop exits.

No Match Found
	- If the outer loop completes without finding a match, the function returns
		a null pointer ((char *)0).

- Match Found
	- If it finds a match, it checks if the next character in the substring
		(substr[needle + 1]) is null.
	- If it is, the function returns a pointer (&result[hay]) to the starting 
		position of the match in the haystack string. This pointer points to the
		character in the haystack that matched the first character of the
		substring.
*/