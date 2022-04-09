/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_both.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:00:34 by abaioumy          #+#    #+#             */
/*   Updated: 2022/04/09 16:34:24 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	double_swap(t_stack_a *list_a, t_stack_b *list_b)
{
	ft_swap_a(&list_a);
	ft_swap_b(&list_b);
	ft_printf("ss");
}

void	double_rotate(t_stack_a *list_a, t_stack_b *list_b)
{
	ft_rotate_a(&list_a);
	ft_rotate_b(&list_b);
	ft_printf("rr");
}

void	double_rev_rotate(t_stack_a *list_a, t_stack_b *list_b)
{
	ft_rev_rotate_a(&list_a);
	ft_rev_rotate_b(&list_b);
	ft_printf("rrr");
}