/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 08:37:53 by skodama           #+#    #+#             */
/*   Updated: 2020/10/31 21:33:55 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_nbr(int n, int fd)
{
	if (n <= -10)
		ft_print_nbr(n / 10, fd);
	ft_putchar_fd('0' + (n % 10) * (-1), fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_print_nbr(n, fd);
	}
	else
		ft_print_nbr(n * (-1), fd);
}
