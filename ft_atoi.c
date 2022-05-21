/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:26:05 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/21 10:53:33 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"
#include "ft_printf/ft_printf.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(0);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	t_var	var;

	var.result = 0;
	var.k = 0;
	var.sign = 1;
	if (!(str[var.k] == 43) && !(str[var.k] == 45)
		&& (!(str[var.k] >= 48 && str[var.k] <= 57)))
		ft_error();
	if (str[var.k] == '-' || str[var.k] == '+')
	{
		if (str[var.k++] == '-')
			var.sign = -1;
	}
	while (str[var.k] && ft_isdigit(str[var.k]) == 1)
	{
		if (!(str[var.k + 1] == 43) && !(str[var.k + 1] == 45)
			&& (!(str[var.k + 1] >= 48 && str[var.k + 1] <= 57))
			&& str[var.k + 1] != 0)
			ft_error();
		var.result = (var.result * 10) + str[var.k++] - 48;
	}
	var.result *= var.sign;
	if (var.result > 2147483647 || var.result < -2147483648)
		ft_error();
	return (var.result);
}
