/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 02:50:55 by skodama           #+#    #+#             */
/*   Updated: 2020/10/31 21:33:49 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmenb, size_t size)
{
	void *p;

	if (!(p = malloc(nmenb * size)))
		return ((void *)0);
	ft_bzero(p, nmenb * size);
	return (p);
}
