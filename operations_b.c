/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:58:22 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/09 17:50:48 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_swap_b(t_stack **list)
{
	t_stack		*curr1;
	t_stack		*curr2;
	int			tmp;

	if (*list)
	{
		curr1 = *list;
		curr2 = curr1->next;
		tmp = curr2->content;
		curr2->content = curr1->content;
		curr1->content = tmp;
	}
}

void	ft_rotate_b(t_stack **list)
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

void	ft_rev_rotate_b(t_stack **list)
{
	t_stack	*head;
	t_stack	*tmp;

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
}

void	ft_push_b(t_stack **list_b, t_stack **list_a)
{
	t_stack	*temp;
	t_stack	*stack_a;

	stack_a = *list_a;
	temp = *list_a;
	*list_a = stack_a->next;
	temp->next = NULL;
	ft_lstadd_front(list_b, temp);
	ft_printf("pb\n");
}
