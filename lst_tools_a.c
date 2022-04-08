/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_tools_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:23:22 by abaioumy          #+#    #+#             */
/*   Updated: 2022/04/07 18:01:09 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

t_stack_a	*ft_lstnew(int content)
{
	t_stack_a	*head;

	head = (t_stack_a *)malloc(sizeof(t_stack_a));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

void	ft_lstadd_back(t_stack_a **lst, t_stack_a *new)
{
	t_stack_a	*last;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

void	ft_lstadd_front(t_stack_a **lst, t_stack_a *new)
{
	if (lst == NULL && new == NULL)
		return ;
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

t_stack_a	*ft_lstlast(t_stack_a *lst)
{
	t_stack_a	*last;

	last = lst;
	if (last == NULL)
		return (lst);
	while (last->next != NULL)
	{
		last = last->next;
	}
	return (last);
}

int	ft_lstsize(t_stack_a *lst)
{
	int			size;
	t_stack_a	*temp;

	size = 0;
	temp = lst;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}

void	ft_lstdelone_a(t_stack_a *lst)
{
	if (lst)
	{
		free(lst);
	}
	return ;
}
