/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:17:37 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/18 19:59:24 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
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
	int		*sorted_nbrs;
	int		*nbrs;
	t_stack	*head;
	int		size;
	int		top_nbr;
	int		max_nbr;
	int		max_bits;
	int		index;
	int		smallest_nbr;
	int		i;
	int		j;
}				t_var;

t_stack		*ft_lstnew(int content);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
void		ft_lstadd_front(t_stack **lst, t_stack *new);
t_stack		*ft_lstlast(t_stack *lst);
int			ft_lstsize(t_stack *lst);
t_stack		**ft_parse_parameters(t_stack **lst, char **av);
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
int			ft_is_sorted(t_stack *stack_a);
void		ft_push_a(t_stack **list_a, t_stack **list_b);
void		ft_push_b(t_stack **list_b, t_stack **list_a);
void		ft_sort_three_nbrs(t_stack **list);
void		ft_sort_four_nbrs(t_stack **list_a, t_stack **list_b, t_var *var);
void		ft_sort_five_nbrs(t_stack **list_a, t_stack **list_b, t_var *var);
void		ft_find_smallest_nbr(t_stack *stack, t_var *var);
void		ft_find_index(t_stack *stack, t_var *var);
int			ft_rev_check_chunk1(t_stack *list, t_var *var);
int			ft_rev_check_chunk2(t_stack *list, t_var *var);
int			ft_rev_check_chunk3(t_stack *list, t_var *var);
int			ft_rev_check_chunk4(t_stack *list, t_var *var);
int			ft_rev_check_chunk5(t_stack *list, t_var *var);
int			ft_check_chunk1(t_stack *list, t_var *var);
int			ft_check_chunk2(t_stack *list, t_var *var);
int			ft_check_chunk3(t_stack *list, t_var *var);
int			ft_check_chunk4(t_stack *list, t_var *var);
int			ft_check_chunk5(t_stack *list, t_var *var);
void		ft_run_rra(t_stack **list_a, t_var *var);
void		ft_run_ra(t_stack **list_a, t_var *var);
void		ft_sort_nbrs(t_stack **list_a, t_stack **list_b, t_var *var);
void		ft_simple_nbrs(t_stack **list);
int			ft_atoi(char *str);
void		ft_bit_op(t_stack **list_a, t_stack **list_b);
int			ft_sort_three_b(t_stack **list, t_stack *last);
void		ft_error(void);

#endif