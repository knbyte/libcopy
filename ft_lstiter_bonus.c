/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:19:18 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:21:31 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates the list 'lst' and applies the function 'f' on the content of each node.
** Parameters:
**     - lst: The address of a pointer to a node.
**     - f: The address of the function used to iterate on the list.
** Return value: None
*/
void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    Note("Iterate through the list");
    while (lst)
    {
        Note("Apply the function 'f' to the content of the current node");
        f(lst->content);
        Note("Move to the next node");
        lst = lst->next;
    }
}