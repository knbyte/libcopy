/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:12:37 by emduncan          #+#    #+#             */
/*   Updated: 2024/03/04 17:24:15 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

memchr(const void *s, int c, size_t n);

/*
NAME
    memchr -- locate byte in byte string

SYNOPSIS
    #include <string.h>

    void *
    memchr(const void *s, int c, size_t n);

DESCRIPTION
    The memchr() function locates the first occurrence of c (converted to
    an unsigned char) in string s.

RETURN VALUES
    The memchr() function returns a pointer to the byte located, or NULL if
    no such byte exists within n bytes.
*/


Returns a pointer to the first occurrence of the character c in the first n bytes of the string s.