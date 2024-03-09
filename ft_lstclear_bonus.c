/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:19:13 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:21:02 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deletes and frees the given node and every successor of that node, using the
** function 'del' and free(3). Finally, the pointer to the list must be set to NULL.
** Parameters:
**     - lst: The address of a pointer to a node.
**     - del: The address of the function used to delete the content of the node.
** Return value: None
*/
void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list    *current;
    t_list    *next;

    Note("Start from the beginning of the list");
    current = *lst;

    Note("Traverse the list and delete each node");
    while (current)
    {
        Note("Save the next pointer to avoid losing the rest of the list");
        next = current->next;
        Note("Delete the current node and its content");
        ft_lstdelone(current, del);
        Note("Move to the next node");
        current = next;
    }

    Note("After clearing the list, set the pointer to NULL");
    *lst = NULL;
}