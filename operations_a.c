/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:07:46 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/09 17:50:37 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_swap_a(t_stack **list)
{
	t_stack		*curr1;
	t_stack		*curr2;
	int			tmp;

	curr1 = *list;
	curr2 = curr1->next;
	tmp = curr2->content;
	curr2->content = curr1->content;
	curr1->content = tmp;
	ft_printf("sa\n");
}

void	ft_rotate_a(t_stack **list)
{
	int			tmp;
	t_stack		*top;
	t_stack		*lst;
	t_stack		*bottom;

	top = *list;
	tmp = top->content;
	top = top->next;
	lst = *list;
	while (top != NULL)
	{
		lst->content = top->content;
		lst = lst->next;
		top = top->next;
	}
	bottom = ft_lstlast(lst);
	bottom->content = tmp;
	ft_printf("ra\n");
}

void	ft_rev_rotate_a(t_stack **list)
{
	t_stack		*head;
	t_stack		*tmp;

	head = *list;
	tmp = *list;
	if (head && ft_lstsize(*list) > 1)
	{
		while (tmp->next->next)
			tmp = tmp->next;
		head = tmp->next;
		tmp->next = NULL;
		ft_lstadd_front(list, head);
	}
	ft_printf("rra\n");
}

void	ft_push_a(t_stack **list_a, t_stack **list_b)
{
	t_stack	*temp;
	t_stack	*stack_b;

	stack_b = *list_b;
	temp = *list_b;
	*list_b = stack_b->next;
	temp->next = NULL;
	ft_lstadd_front(list_a, temp);
	ft_printf("pa\n");
}
