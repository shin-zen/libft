/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 06:58:03 by skodama           #+#    #+#             */
/*   Updated: 2020/10/31 14:49:11 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s1);
	if (!(copy = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	ft_memcpy(copy, s1, len + 1);
	return (copy);
}
