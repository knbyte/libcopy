/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:19:03 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:19:55 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Counts the number of nodes in a list.
** Parameters:
**     - lst: The beginning of the list.
** Return value:
**     - The length of the list.
*/
int    ft_lstsize(t_list *lst)
{
    int    size;

    Note("Initialize size to 0");
    size = 0;
    Note("Traverse the list and count nodes until the end (NULL pointer is encountered)");
    while (lst)
    {
        Note("Increment size for each node");
        size++;
        Note("Move to the next node");
        lst = lst->next;
    }
    Note("Return the size of the list");
    return (size);
}