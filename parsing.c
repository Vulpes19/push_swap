/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:52:27 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/21 10:54:38 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

static int	is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '-' || str[i] == '+') && i != 0)
			ft_error();
		i++;
	}
	return (1);
}

t_stack	**ft_parse_parameters(t_stack **lst, char **av)
{
	int		i;

	i = 1;
	while (av[i])
	{
		if (!is_valid(av[i]))
			ft_error();
		ft_lstadd_back(lst, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	return (lst);
}
