/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:19:10 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:19:47 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds a new node at the beginning of the list.
** Parameters:
**     - lst: The address of a pointer to the first link of the list.
**     - new: The address of a pointer to the node to be added.
** Return value:
**     - None
*/
void    ft_lstadd_front(t_list **lst, t_list *new)
{
    Note("If the list is empty, set the new node as the first node");
    if (!*lst)
        *lst = new;
    else
    {
        Note("Set the next pointer of the new node to the current first node");
        new->next = *lst;
        Note("Update the pointer to the first node to point to the new node");
        *lst = new;
    }
}