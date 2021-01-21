/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 05:50:24 by skodama           #+#    #+#             */
/*   Updated: 2020/10/31 21:33:39 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	unsigned char	find;

	find = c;
	len = ft_strlen((char *)s) + 1;
	while (len-- > 0)
	{
		if (s[len] == find)
			return ((char *)&s[len]);
	}
	return (NULL);
}
