/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_both.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:00:34 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/08 15:36:51 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

// void	double_swap(t_stack *list_a, t_stack *list_b)
// {
// 	ft_swap_a(&list_a);
// 	ft_swap_b(&list_b);
// 	ft_printf("ss");
// }

// void	double_rotate(t_stack *list_a, t_stack *list_b)
// {
// 	ft_rotate_a(&list_a);
// 	ft_rotate_b(&list_b);
// 	ft_printf("rr");
// }

// void	double_rev_rotate(t_stack *list_a, t_stack *list_b)
// {
// 	ft_rev_rotate_a(&list_a);
// 	ft_rev_rotate_b(&list_b);
// 	ft_printf("rrr");
// }

void	ft_run_ra(t_stack **list_a, t_var *var)
{
	printf("hmar %d\n", var->hold_first);
	while (var->hold_first > 0)
	{
		ft_rotate_a(list_a);
		var->hold_first--;
	}
}

void	ft_run_rra(t_stack **list_a, t_var *var)
{
	printf("hmarrrrrr %d\n", var->hold_second);
	while (var->hold_second)
	{
		ft_rev_rotate_a(list_a);
		var->hold_second--;
	}
	ft_print_lst_a(*list_a);
	exit(1);
}
