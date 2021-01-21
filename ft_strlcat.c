/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 07:02:02 by skodama           #+#    #+#             */
/*   Updated: 2020/10/31 21:34:57 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t maxlen)
{
	size_t dstlen;
	size_t srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (maxlen <= dstlen)
		return (maxlen + srclen);
	ft_strlcpy(dst + dstlen, src, maxlen - dstlen);
	return (dstlen + srclen);
}
