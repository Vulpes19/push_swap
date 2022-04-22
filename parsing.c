/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:52:27 by abaioumy          #+#    #+#             */
/*   Updated: 2022/04/19 16:09:02 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

t_stack	**ft_parse_parameters(t_stack **lst, char **av, int ac)
{
	int		i;

	i = 1;
	while (i < ac)
	{
		ft_lstadd_back(lst, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	return (lst);
}
