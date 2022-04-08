/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:20:40 by abaioumy          #+#    #+#             */
/*   Updated: 2022/04/07 19:55:07 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	ft_print_lst_a(t_stack_a *lst)
{
	ft_printf("---\n");
	while (lst != NULL)
	{
		ft_printf("%d |\n", lst->content);
		lst = lst->next;
	}
	ft_printf("---\n");
	ft_printf("a\n");
}

void	ft_print_lst_b(t_stack_b *lst)
{
	ft_printf("---\n");
	while (lst != NULL)
	{
		ft_printf("%d |\n", lst->content_b);
		lst = lst->next_b;
	}
	ft_printf("---\n");
	ft_printf("b\n");
}