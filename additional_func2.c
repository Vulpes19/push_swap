/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional_func2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:04:53 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/11 13:13:21 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	ft_sort_three_b(t_stack **list, t_stack *last)
{
	t_stack	*stack_a;

	stack_a = *list;
	if (last->content < stack_a->content
		&& stack_a->next->content < stack_a->content)
	{
		ft_rotate_a(list);
		return (1);
	}
	if (last->content < stack_a->next->content
		&& stack_a->content < last->content)
	{
		ft_swap_a(list);
		ft_rotate_a(list);
		return (1);
	}
	if (last->content < stack_a->next->content
		&& last->content < stack_a->content)
	{
		ft_rev_rotate_a(list);
		return (1);
	}
	return (0);
}
