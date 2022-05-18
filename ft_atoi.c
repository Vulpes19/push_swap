/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:26:05 by abaioumy          #+#    #+#             */
/*   Updated: 2022/05/18 19:59:04 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/mini_libft.h"
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
	int					i;
	long				result;
	int					sign;

	result = 0;
	i = 0;
	sign = 1;
	if (!(str[i] == 43) && !(str[i] == 45)
		&& (!(str[i] >= 48 && str[i] <= 57)))
		ft_error();
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && ft_isdigit(str[i]) == 1)
	{
		if (!(str[i + 1] == 43) && !(str[i + 1] == 45)
			&& (!(str[i + 1] >= 48 && str[i + 1] <= 57)) && str[i + 1] != 0)
			ft_error();
		result = (result * 10) + str[i++] - 48;
	}
	if (result > 2147483647 || result < -2147483648)
		ft_error();
	return (result * sign);
}
