/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 11:51:04 by skodama           #+#    #+#             */
/*   Updated: 2020/10/31 21:35:45 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free_all(char **res, size_t i)
{
	while (i-- > 0)
	{
		free(res[i]);
		res[i] = NULL;
	}
	free(res);
	res = NULL;
}

static int		ft_get_nb_strs(char const *s, char c)
{
	unsigned int nb_strs;

	nb_strs = 0;
	while (*s)
	{
		if (c == *s)
			s++;
		else
		{
			nb_strs++;
			while (*s && c != *s)
				s++;
		}
	}
	return (nb_strs);
}

static void		ft_put_strs(char **res, char const *s, char c)
{
	const char		*tmp;
	size_t			len;
	size_t			i;

	i = 0;
	len = 0;
	while (*s)
	{
		while (*s && c == *s)
			s++;
		tmp = s;
		while (*s && c != *s)
		{
			s++;
			len++;
		}
		if (*tmp != '\0' && !(res[i] = ft_substr(tmp, 0, len)))
		{
			ft_free_all(res, i);
			return ;
		}
		len = 0;
		i++;
	}
}

char			**ft_split(char const *s, char c)
{
	char	**res;
	int		nb_strs;

	if (!s)
		return (NULL);
	nb_strs = ft_get_nb_strs(s, c);
	if (!(res = (char **)malloc((nb_strs + 1) * sizeof(char *))))
		return ((NULL));
	res[nb_strs] = NULL;
	ft_put_strs(res, s, c);
	return (res);
}
