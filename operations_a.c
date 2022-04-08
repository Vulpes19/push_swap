/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:07:46 by abaioumy          #+#    #+#             */
/*   Updated: 2022/04/07 21:07:08 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_swap_a(t_stack_a **list)
{
	t_stack_a	*curr1;
	t_stack_a	*curr2;
	int			tmp;

	curr1 = *list;
	curr2 = curr1->next;
	tmp = curr2->content;
	curr2->content = curr1->content;
	curr1->content = tmp;
	ft_printf("sa\n");
}

void	ft_rotate_a(t_stack_a **list)
{
	int			tmp;
	t_stack_a	*top;
	t_stack_a	*lst;
	t_stack_a	*bottom;

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

void	ft_rev_rotate_a(t_stack_a **list)
{
	t_stack_a	*head;
	t_stack_a	*last;
	int			tmp;
	int			index;
	int			tmp2;

	head = *list;
	last = ft_lstlast(head);
	tmp = last->content;
	index = tmp;
	tmp2 = head->content;
	head->content = tmp;
	while (head->next->content != index)
	{
		tmp = head->content;
		head = head->next;
		tmp2 = head->content;
		head->next->content = tmp;
		head = head->next;
	}
}

void	ft_push_a(t_stack_a **list_a, t_stack_b **list_b)
{
	t_stack_a	*lst_a;
	t_stack_b	*lst_b;
	t_stack_b	*lst2_b;

	lst_b = *list_b;
	lst_a = ft_lstnew(lst_b->content_b);
	if (lst_b)
	{
		if (lst_b->next_b == NULL)
			free(lst_b);
		else
		{
			lst2_b = lst_b;
			lst_b = lst_b->next_b;
			free(lst2_b);
		}
	}
	if (*list_a)
	{
		lst_a->next = *list_a;
		*list_a = lst_a;
	}
	ft_printf("pa\n");
}
