/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 04:48:12 by skodama           #+#    #+#             */
/*   Updated: 2020/11/01 09:14:01 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char find;

	find = c;
	while (*s)
	{
		if (*s == find)
			return ((char *)s);
		s++;
	}
	if (find == '\0')
		return ((char *)s);
	return ((NULL));
}
