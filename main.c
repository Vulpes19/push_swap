/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:17:27 by abaioumy          #+#    #+#             */
/*   Updated: 2022/04/09 17:00:10 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_stack_a	*stack_a;
	t_stack_b	*stack_b;
	int			i;

	i = 0;
	stack_a = NULL;
	// ft_lstadd_front_b(&stack_b, ft_lstnew_b(5));
	stack_a = ft_parse_parameters(stack_a, av, ac);
	ft_print_lst_a(stack_a);
	ft_push_b(&stack_b, &stack_a);
	ft_printf("======\n");
	ft_print_lst_a(stack_a);
	ft_print_lst_b(stack_b);
	// free_list_a(stack_a);
	return (0);
}
