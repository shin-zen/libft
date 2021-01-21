/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:17:08 by skodama           #+#    #+#             */
/*   Updated: 2020/12/19 12:12:44 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r') ? 1 : 0);
}

int			ft_atoi(const char *str)
{
	int				sign;
	unsigned int	res;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	res = 0;
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
		if ((res > INT_MAX && sign == 1) ||
		(res > (unsigned int)INT_MAX + 1 && sign == -1))
			return (sign == 1 ? INT_MAX : INT_MIN);
	}
	return (res * sign);
}
