/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:58:22 by abaioumy          #+#    #+#             */
/*   Updated: 2022/04/09 17:08:43 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_swap_b(t_stack_b **list)
{
	t_stack_b	*curr1;
	t_stack_b	*curr2;
	int			tmp;

	if (*list)
	{
		curr1 = *list;
		curr2 = curr1->next_b;
		tmp = curr2->content_b;
		curr2->content_b = curr1->content_b;
		curr1->content_b = tmp;
	}
}

void	ft_rotate_b(t_stack_b **list)
{
	int			tmp;
	t_stack_b	*top;
	t_stack_b	*lst;
	t_stack_b	*bottom;

	top = *list;
	tmp = top->content_b;
	top = top->next_b;
	lst = *list;
	while (top != NULL)
	{
		lst->content_b = top->content_b;
		lst = lst->next_b;
		top = top->next_b;
	}
	bottom = ft_lstlast_b(lst);
	bottom->content_b = tmp;
	ft_printf("ra\n");
}

void	ft_rev_rotate_b(t_stack_b **list)
{
	t_stack_b	*head;
	t_stack_b	*tmp;

	head = *list;
	tmp = *list;
	if (head && ft_lstsize_b(*list) > 1)
	{
		while (tmp->next_b->next_b)
			tmp = tmp->next_b;
		head = tmp->next_b;
		tmp->next_b = NULL;
		ft_lstadd_front_b(list, head);
	}
}

void	ft_push_b(t_stack_b **list_b, t_stack_a **list_a)
{
	t_stack_b	*lst_b;
	t_stack_a	*lst_a;
	t_stack_a	*lst2_a;

	lst_a = *list_a;
	lst_b = ft_lstnew_b(lst_a->content);
	if (ft_lstsize_b(*list_b) == 0)
	{
		lst_b->next_b = NULL;
		*list_b = lst_b;
		return ;
	}
	if (lst_a)
	{
		if (lst_a->next == NULL)
			free(lst_a);
		else
		{
			lst2_a = lst_a;
			lst_a = lst_a->next;
			free(lst2_a);
		}
	}
	if (*list_b)
	{
		lst_b->next_b = *list_b;
		*list_b = lst_b;
	}
}
