/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 10:17:52 by skodama           #+#    #+#             */
/*   Updated: 2020/10/31 16:12:38 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (!(dst = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	if (start > slen)
		*dst = '\0';
	else
		ft_strlcpy(dst, s + start,
		(slen - start) > len ? len + 1 : (slen - start + 1));
	return (dst);
}
