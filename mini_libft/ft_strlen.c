/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:34:00 by abaioumy          #+#    #+#             */
/*   Updated: 2022/03/23 16:34:30 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/mini_libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (ptr[i])
		i++;
	return (i);
}