/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:17:37 by abaioumy          #+#    #+#             */
/*   Updated: 2022/04/07 19:55:22 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../ft_printf/ft_printf.h"
# include "mini_libft.h"

typedef struct s_stack_a
{
	int					content;
	struct s_stack_a	*next;
}				t_stack_a;

typedef struct s_stack_b
{
	int					content_b;
	struct s_stack_b	*next_b;
}				t_stack_b;

typedef struct s_var
{
	int	lst_size;
}				t_var;

t_stack_a	*ft_lstnew(int content);
t_stack_b	*ft_lstnew_b(int content);
t_stack_a	*ft_parse_parameters(t_stack_a *lst, char **av, int ac);
void		ft_print_lst_a(t_stack_a *lst);
void		ft_print_lst_b(t_stack_b *lst);
void		ft_rotate_a(t_stack_a **list);
void		ft_swap_a(t_stack_a **list);
void		ft_lstadd_back(t_stack_a **lst, t_stack_a *new);
void		ft_lstadd_back_b(t_stack_b **lst, t_stack_b *new);
void		ft_lstadd_front(t_stack_a **lst, t_stack_a *new);
void		ft_lstadd_front_b(t_stack_b **lst, t_stack_b *new);
int			ft_lstsize(t_stack_a *lst);
t_stack_a	*ft_lstlast(t_stack_a *lst);
t_stack_b	*ft_lstlast_b(t_stack_b *lst);
void		free_list_a(t_stack_a *head);
void		free_list_b(t_stack_b *head);
void		ft_rev_rotate_a(t_stack_a **list);
void		ft_lstdelone_a(t_stack_a *lst);
void		ft_lstdelone_b(t_stack_b *lst);
void		ft_push_a(t_stack_a **list_a, t_stack_b **list_b);
void		ft_push_b(t_stack_a **list_b, t_stack_b **list_a);

#endif