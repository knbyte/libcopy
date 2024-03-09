/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:20:23 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:20:24 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds the node 'new' at the end of the list.
** Parameters:
**     - lst: The address of a pointer to the first link of a list.
**     - new: The address of a pointer to the node to be added to the list.
** Return value: None
*/
void    ft_lstadd_back(t_list **lst, t_list *new)
{
    Note("If the list is empty, set 'new' as the first node");
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    Note("Find the last node of the list");
    t_list *last = ft_lstlast(*lst);
    Note("Append 'new' after the last node");
    last->next = new;
}