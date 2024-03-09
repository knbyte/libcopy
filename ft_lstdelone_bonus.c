/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:19:16 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/09 23:20:54 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter a node and frees the memory of the node's content using
** the function 'del' given as a parameter and frees the node. The memory of 'next'
** must not be freed.
** Parameters:
**     - lst: The node to free.
**     - del: The address of the function used to delete the content.
** Return value: None
*/
void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    Note("If 'del' function is provided, free the content of the node");
    if (del)
        del(lst->content);
    Note("Free the node itself");
    free(lst);
}