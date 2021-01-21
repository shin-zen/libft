/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 06:35:04 by skodama           #+#    #+#             */
/*   Updated: 2020/11/21 10:36:54 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*p1;
	const unsigned char *p2;
	size_t				i;

	p1 = (unsigned char *)dst;
	p2 = (const unsigned char *)src;
	i = 0;
	while (n--)
	{
		p1[i] = p2[i];
		if (p2[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
		i++;
	}
	return (NULL);
}
