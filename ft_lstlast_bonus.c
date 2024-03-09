/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:19:21 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:21:49 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns the last node of the list.
** Parameters:
**     - lst: The beginning of the list.
** Return value:
**     - Last node of the list.
*/
t_list    *ft_lstlast(t_list *lst)
{
    Note("If the list is empty, return NULL");
    if (!lst)
        return (NULL);
    Note("Traverse the list until the last node is reached");
    while (lst->next)
        lst = lst->next;
    Note("Return the last node of the list");
    return (lst);
}