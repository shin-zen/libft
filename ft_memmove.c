/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 06:44:57 by skodama           #+#    #+#             */
/*   Updated: 2020/10/31 13:42:23 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*tmpdst;
	const unsigned char	*tmpsrc;

	tmpdst = dst;
	tmpsrc = src;
	if (n == 0 || dst == src)
		return (dst);
	if (src > dst)
	{
		while (n--)
			*tmpdst++ = *tmpsrc++;
	}
	else
	{
		while (n--)
			tmpdst[n] = tmpsrc[n];
	}
	return (dst);
}
