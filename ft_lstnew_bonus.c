/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:19:26 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:19:39 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates memory for a new node and initializes it with the given content.
** Parameters:
**     - content: The content to initialize the node with.
** Return value:
**     - The new node.
**     - NULL if memory allocation fails.
*/
t_list    *ft_lstnew(void *content)
{
    Note("Allocate memory for the new node");
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return (NULL);
        Note("Check if memory allocation failed");

    Note("Initialize the content and next pointer of the new node");
    new_node->content = content;
    new_node->next = NULL;

    Note("Return a pointer to the newly created node");
    return (new_node);
}