/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skodama <skodama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:16:32 by skodama           #+#    #+#             */
/*   Updated: 2020/10/31 20:31:15 by skodama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

	if (!(newlst = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}
