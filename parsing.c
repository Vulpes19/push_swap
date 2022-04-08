/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:52:27 by abaioumy          #+#    #+#             */
/*   Updated: 2022/03/28 16:07:33 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

t_stack_a	*ft_parse_parameters(t_stack_a *lst, char **av, int ac)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		ft_lstadd_front(&lst, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	return (lst);
}
