/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 10:37:10 by skodama           #+#    #+#             */
/*   Updated: 2020/10/31 13:08:15 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pb;
	unsigned char	car;

	car = (unsigned char)c;
	pb = s;
	while (n--)
	{
		*pb++ = car;
	}
	return (s);
}
