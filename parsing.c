/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:52:27 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/10 17:17:20 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

// int	ft_check_nbrs(char **av)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (av[i][j])
// 	{
// 		while (av[i][j])
// 		{
// 			if (av[i][j] == 32 )
// 		}
// 	}
// }

t_stack	**ft_parse_parameters(t_stack **lst, char **av, int ac)
{
	int		i;

	i = 1;
	ac = 0;
	while (av[i])
	{
		ft_lstadd_back(lst, ft_lstnew(ft_atoi(av[i])));
		i++;
	}
	return (lst);
}
