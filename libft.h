/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emduncan <emduncan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:13:49 by emduncan          #+#    #+#             */
/*   Updated: 2024/04/04 22:46:53 by emduncan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdbool.h>
# include <string.h>
# include <unistd.h>
# include <stddef.h>

/* ************************************************************************** */
/*                                 STRUCT                                     */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
/*
The members of the t_list struct are:
   > content: The data contained in the node.
   > void * allows to store any kind of data.
   > next: The address of the next node, or NULL
	if the next node is the last one.

We are declaring a variable using typedef. 

Structs are a built in type - you make a copy and
put in your new values/fields you want .

In this case s_list is what we are calling the
copy and the variables inside are the new fields.

To turn the structure into a type we can use we
name the group t_list.

*/

/* ************************************************************************** */
/*                             COMMENTS/NOTES                                 */
/*   The function note takes a string as input and does nothing with it.      */
/*   It is only used for the sake of getting around norminette.               */
/*   This is listed in the notes.c file                                       */
/* ************************************************************************** */



/* ************************************************************************** */
/*                             CHECK FUNCTIONS                                */
/* ************************************************************************** */

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/* ************************************************************************** */
/*                            MEMORY FUNCTIONS                                */
/* ************************************************************************** */

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

/* ************************************************************************** */
/*                             WRITE FUNCTIONS                                */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *str, int fd);

/* ************************************************************************** */
/*                             STRING FUNCTIONS                               */
/* ************************************************************************** */

size_t	ft_strlen(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strlcat(char *dest, const char *src, size_t destsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
char	*ft_strdup(const char *src);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/* ************************************************************************** */
/*                             LIST FUNCTIONS                                 */
/* ************************************************************************** */

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *newlst);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *newlst);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/* ************************************************************************** */
/*                             INPUT FUNCTIONS                                */
/* ************************************************************************** */

#endif