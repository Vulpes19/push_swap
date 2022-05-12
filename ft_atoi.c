/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:26:05 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/11 20:55:45 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/mini_libft.h"
#include "ft_printf/ft_printf.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int					i;
	int					result;
	int					sign;

	result = 0;
	i = 0;
	sign = 1;
	if ((str[i] >= 0 && str[i] <= 44)
		|| (str[i] >= 46 && str[i] <= 47)
		|| (str[i] >= 58 && str[i] <= 127))
	{
		ft_printf("Error\n");
		exit(0);
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && ft_isdigit(str[i]) == 1)
	{
		result = (result * 10) + str[i++] - 48;
	}
	return (result * sign);
}
