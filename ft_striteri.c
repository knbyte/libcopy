/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:31 by emduncan          #+#    #+#             */
/*   Updated: 2024/05/01 15:12:45 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	ctr;

	ctr = 0;
	if (s && f)
	{
		while (s[ctr])
		{
			f(ctr, s + ctr);
			ctr++;
		}
	}
}

/*

~ N O T E S ~

A b o u t   F u n c t i o n :

This function applies a function called 'f' to each character in a string (s). 
The first argument that 'f' gets is the index of the character in the string, 
and the second argument is the address of the character itself.
Each character is passed by address to ’f’ to be modified if necessary.

F u n c t i o n   P r o c e s s :

Arguments
	- A pointer to a string
	- A pointer to function prototyped with unsigned int anc char *
		and a return type of void

- Input Validation:
    - The function first checks two conditions using a single if statement:
        - s: Checks if the pointer to the string (s) is not NULL.
        - f: Checks if the function pointer (f) is not NULL.
    - If either condition is false, the function exits.

- Looping through the String:
    - If both inputs are valid, the function uses a while loop to iterate
		through the characters in the string s.
    - The loop condition s[ctr] checks if the character at the current index
		(ctr) is not the null terminator. This ensures the loop continues until
		it reaches the end of the string.

- Applying Function to Each Character:
    - Inside the loop:
		- We call the fucntion f for each character in the string, passing
			the current index and a pointer to the specific character in s we
			are applying f to.
		- We increment the counter.
*/