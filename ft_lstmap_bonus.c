/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:19:23 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:21:14 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates the list 'lst' and applies the function 'f' on the content of each node.
** Creates a new list resulting from the successive applications of the function 'f'.
** The 'del' function is used to delete the content of a node if needed.
** Parameters:
**     - lst: The address of a pointer to a node.
**     - f: The address of the function used to iterate on the list.
**     - del: The address of the function used to delete the content of a node if needed.
** Return value: The new list.
** NULL if the allocation fails.
*/
t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *new_list;
    t_list    *new_node;

    Note("Initialize the new list to NULL");
    new_list = NULL;

    Note("Iterate through the original list 'lst'");
    while (lst)
    {
        Note("Apply the function 'f' to the content of the current node");
        new_node = ft_lstnew(f(lst->content));
        if (!new_node)
        {
            Note("If allocation fails, delete the newly created nodes and return NULL");
            ft_lstclear(&new_list, del);
            return (NULL);
        }

        Note("Add the newly created node to the end of the new list");
        ft_lstadd_back(&new_list, new_node);

        Note("Move to the next node in the original list");
        lst = lst->next;
    }

    Note("Return the new list");
    return (new_list);
}