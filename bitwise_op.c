/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitwise_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:11:11 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/09 18:31:26 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

static	int	ft_is_sorted(t_stack *stack_a)
{
	while (stack_a->next)
	{
		if (stack_a->content > stack_a->next->content)
			return (1);
		stack_a = stack_a->next;
	}
	return (0);
}

void	ft_bit_op(t_stack **list_a, t_stack **list_b)
{
	t_var	var;
	t_stack	*stack_a;

	var.i = 0;
	var.j = 0;
	stack_a = *list_a;
	var.size = ft_lstsize(*list_a);
	var.max_nbr = var.size - 1;
	var.max_bits = 0;
	while (ft_is_sorted(*list_a) || (*list_b))
	{
		var.j = 0;
		while (var.j < var.size)
		{
			stack_a = *list_a;
			if (stack_a)
				var.top_nbr = stack_a->content;
			else
				break ;
			if (((var.top_nbr >> var.i) & 1) == 1)
				ft_rotate_a(list_a);
			else
				ft_push_b(list_b, list_a);
			var.j++;
		}
		while (*list_b)
			ft_push_a(list_a, list_b);
		var.i++;
	}
}
