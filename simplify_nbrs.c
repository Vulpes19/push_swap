/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplify_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:38:04 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/19 15:23:41 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

static	void	ft_swap(int	*ptr1, int *ptr2)
{
	int	tmp;

	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp;
}

static	int	*ft_bubble_sort(int *nbrs, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (nbrs[i] < nbrs[j])
				ft_swap(&nbrs[i], &nbrs[j]);
			j++;
		}
		i++;
	}
	i = 0;
	return (nbrs);
}

static	void	ft_replace_nbrs(t_stack **list, int	*sorted_nbrs)
{
	int		i;
	int		j;
	t_stack	*stack_a;
	t_stack	*head;

	i = 0;
	stack_a = *list;
	head = stack_a;
	while (stack_a)
	{
		j = 0;
		while (j < ft_lstsize(*list))
		{
			if (stack_a->content == sorted_nbrs[j])
			{
				stack_a->content = j;
				break ;
			}
			j++;
		}
		stack_a = stack_a->next;
	}
	*list = head;
}

void	ft_simple_nbrs(t_stack **list)
{
	t_var	var;

	var.i = 0;
	var.head = *list;
	var.size = ft_lstsize(*list);
	var.nbrs = (int *)malloc(sizeof(int) * ft_lstsize(*list));
	var.sorted_nbrs = (int *)malloc(sizeof(int) * ft_lstsize(*list));
	while (var.head)
	{
		var.nbrs[var.i] = var.head->content;
		var.sorted_nbrs[var.i] = var.head->content;
		var.head = var.head->next;
		var.i++;
	}
	var.sorted_nbrs = ft_bubble_sort(var.sorted_nbrs, var.size);
	var.i = 0;
	ft_replace_nbrs(list, var.sorted_nbrs);
	free(var.nbrs);
	free(var.sorted_nbrs);
}
