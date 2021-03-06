/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_func.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:00:05 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/11 13:22:48 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_sort_three_nbrs(t_stack **list)
{
	t_stack	*stack_a;
	t_stack	*last;

	stack_a = *list;
	last = ft_lstlast(stack_a);
	if (stack_a->content > stack_a->next->content
		&& last->content > stack_a->content)
	{
		ft_swap_a(list);
		return ;
	}
	if (last->content < stack_a->next->content
		&& last->content < stack_a->content
		&& stack_a->next->content < stack_a->content)
	{
		ft_swap_a(list);
		ft_rev_rotate_a(list);
		return ;
	}
	if (ft_sort_three_b(list, last))
		return ;
}

void	ft_sort_four_nbrs(t_stack **list_a, t_stack **list_b, t_var *var)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;

	stack_a = *list_a;
	stack_b = *list_b;
	i = 1;
	if (var->index == 2)
		ft_swap_a(list_a);
	else if (var->index == 3)
	{
		ft_rev_rotate_a(list_a);
		ft_rev_rotate_a(list_a);
	}
	else if (var->index == 4)
		ft_rev_rotate_a(list_a);
	while (i++ < ft_lstsize(*list_a) - 3)
		ft_push_b(list_b, list_a);
	ft_push_b(list_b, list_a);
	ft_sort_three_nbrs(list_a);
	i = 0;
	while (i++ < ft_lstsize(*list_b))
		ft_push_a(list_a, list_b);
}

void	ft_sort_five_nbrs(t_stack **list_a, t_stack **list_b, t_var *var)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = *list_a;
	stack_b = *list_b;
	if (var->index == 2)
		ft_swap_a(list_a);
	else if (var->index == 3)
	{
		ft_rev_rotate_a(list_a);
		ft_rev_rotate_a(list_a);
		ft_rev_rotate_a(list_a);
	}
	else if (var->index == 4)
	{
		ft_rev_rotate_a(list_a);
		ft_rev_rotate_a(list_a);
	}
	else if (var->index == 5)
		ft_rev_rotate_a(list_a);
	ft_push_b(list_b, list_a);
	ft_find_smallest_nbr(*list_a, var);
	ft_sort_four_nbrs(list_a, list_b, var);
	ft_push_a(list_a, list_b);
}
