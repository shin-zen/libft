/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:36:24 by skodama           #+#    #+#             */
/*   Updated: 2020/10/31 13:17:29 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *ret;

	if (n == 0 || dst == src)
		return (dst);
	ret = (unsigned char *)dst;
	while (n--)
		*(unsigned char *)dst++ = *(unsigned char *)src++;
	return (ret);
}
