/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:00:57 by skodama           #+#    #+#             */
/*   Updated: 2020/11/01 01:37:09 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	needle_len;

	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && n >= needle_len)
	{
		if (((haystack[0] == needle[0]) &&
		(0 == ft_strncmp(haystack, needle, needle_len))))
			return ((char *)haystack);
		haystack++;
		n--;
	}
	return (NULL);
}
