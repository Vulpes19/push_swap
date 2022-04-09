/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_tools_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:48:19 by abaioumy          #+#    #+#             */
/*   Updated: 2022/04/09 16:42:49 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

t_stack_b	*ft_lstnew_b(int content)
{
	t_stack_b	*head;

	head = (t_stack_b *)malloc(sizeof(t_stack_b));
	if (!head)
		return (NULL);
	head->content_b = content;
	head->next_b = NULL;
	return (head);
}

void	ft_lstadd_back_b(t_stack_b **lst, t_stack_b *new)
{
	t_stack_b	*last;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		ft_lstadd_front_b(lst, new);
		return ;
	}
	last = ft_lstlast_b(*lst);
	last->next_b = new;
}

void	ft_lstadd_front_b(t_stack_b **lst, t_stack_b *new)
{
	if (lst == NULL && new == NULL)
		return ;
	if (new == NULL)
		return ;
	new->next_b = *lst;
	*lst = new;
}

t_stack_b	*ft_lstlast_b(t_stack_b *lst)
{
	t_stack_b	*last;

	last = lst;
	if (last == NULL)
		return (lst);
	while (last->next_b != NULL)
	{
		last = last->next_b;
	}
	return (last);
}

int	ft_lstsize_b(t_stack_b *lst)
{
	int			size;
	t_stack_b	*temp;

	size = 0;
	temp = lst;
	while (temp)
	{
		size++;
		temp = temp->next_b;
	}
	return (size);
}
