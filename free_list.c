/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:36:17 by abaioumy          #+#    #+#             */
/*   Updated: 2022/03/28 16:06:24 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	free_list_a(t_stack_a *head)
{
	t_stack_a	*tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

void	free_list_b(t_stack_b *head)
{
	t_stack_b	*tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next_b;
		free(tmp);
	}
}
