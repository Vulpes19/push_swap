/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:32:25 by abaioumy          #+#    #+#             */
/*   Updated: 2022/04/22 17:04:03 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_chunk1(t_stack *list, t_var *var)
{
	t_stack	*head;

	head = list;
	var->hold_first = 0;
	while (list)
	{
		if (list->content >= 0 && list->content <= 19)
			return (FOUND);
		var->hold_first++;
		list = list->next;
	}
	return (NOT_FOUND);
}

int	ft_check_chunk2(t_stack *list, t_var *var)
{
	t_stack	*head;

	head = list;
	var->hold_first = 0;
	while (list)
	{
		if (list->content >= 20 && list->content <= 39)
			return (FOUND);
		var->hold_first++;
		list = list->next;
	}
	return (NOT_FOUND);
}

int	ft_check_chunk3(t_stack *list, t_var *var)
{
	t_stack	*head;

	head = list;
	var->hold_first = 0;
	while (list)
	{
		if (list->content >= 40 && list->content <= 59)
			return (FOUND);
		var->hold_first++;
		list = list->next;
	}
	return (NOT_FOUND);
}

int	ft_check_chunk4(t_stack *list, t_var *var)
{
	t_stack	*head;

	head = list;
	var->hold_first = 0;
	while (list)
	{
		if (list->content >= 60 && list->content <= 79)
			return (FOUND);
		var->hold_first++;
		list = list->next;
	}
	return (NOT_FOUND);
}
