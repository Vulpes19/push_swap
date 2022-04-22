/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:17:37 by abaioumy          #+#    #+#             */
/*   Updated: 2022/04/22 16:48:22 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define FOUND 1
# define NOT_FOUND 0
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../ft_printf/ft_printf.h"
# include "mini_libft.h"

typedef struct s_stack
{
	int					content;
	struct s_stack		*next;
}				t_stack;

typedef struct s_var
{
	int	lst_size;
	int	smallest_nbr;
	int	index;
	int	hold_first;
	int	hold_second;
	int	i;
	int	j;
}				t_var;

t_stack		*ft_lstnew(int content);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack		*ft_lstlast(t_stack *lst);
int			ft_lstsize(t_stack *lst);
t_stack		**ft_parse_parameters(t_stack **lst, char **av, int ac);
int			ft_check_same_nbr(t_stack *list);
void		ft_print_lst_a(t_stack *lst);
void		ft_print_lst_b(t_stack *lst);
void		ft_rotate_a(t_stack **list);
void		ft_rotate_b(t_stack **list);
void		ft_swap_a(t_stack **list);
void		ft_swap_b(t_stack **list);
void		free_list(t_stack *head);
void		ft_rev_rotate_a(t_stack **list);
void		ft_rev_rotate_b(t_stack **list);
void		ft_push_a(t_stack **list_a, t_stack **list_b);
void		ft_push_b(t_stack **list_b, t_stack **list_a);
void		ft_sort_three_nbrs(t_stack **list);
void		ft_sort_four_nbrs(t_stack **list_a, t_stack **list_b, t_var *var);
void		ft_sort_five_nbrs(t_stack **list_a, t_stack **list_b, t_var *var);
void		ft_find_smallest_nbr(t_stack *stack, t_var *var);
void		ft_find_index(t_stack *stack, t_var *var);

#endif