/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:17:27 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/18 19:58:29 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	t_var		var;

	if (ac < 2)
		ft_error();
	stack_a = NULL;
	ft_parse_parameters(&stack_a, av);
	ft_find_smallest_nbr(stack_a, &var);
	if (ft_check_same_nbr(stack_a))
	{
		if (ft_lstsize(stack_a) == 3)
			ft_sort_three_nbrs(&stack_a);
		else if (ft_lstsize(stack_a) == 4)
			ft_sort_four_nbrs(&stack_a, &stack_b, &var);
		else if (ft_lstsize(stack_a) == 5)
			ft_sort_five_nbrs(&stack_a, &stack_b, &var);
		else
		{
			ft_simple_nbrs(&stack_a);
			ft_bit_op(&stack_a, &stack_b);
		}
	}
	free_list(stack_a);
	return (0);
}
