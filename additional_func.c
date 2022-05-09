/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional_func.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:07:17 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/09 17:58:40 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	ft_check_same_nbr(t_stack *head)
{
	t_stack	*list;

	while (head->next != NULL)
	{
		list = head->next;
		while (list != NULL)
		{
			if (head->content == list->content)
			{
				ft_printf("Error");
				return (0);
			}
			list = list->next;
		}
		head = head->next;
	}
	return (1);
}

void	ft_find_index(t_stack *stack, t_var *var)
{
	var->index = 1;
	while (stack)
	{
		if (stack->content == var->smallest_nbr)
			return ;
		var->index++;
		stack = stack->next;
	}
}

void	ft_find_smallest_nbr(t_stack *stack, t_var *var)
{
	int		i;
	t_stack	*head;

	head = stack;
	i = 0;
	var->smallest_nbr = stack->content;
	stack = stack->next;
	while (stack)
	{
		if (var->smallest_nbr > stack->content)
			var->smallest_nbr = stack->content;
		stack = stack->next;
	}
	ft_find_index(head, var);
}
