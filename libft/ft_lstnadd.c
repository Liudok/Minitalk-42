/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 16:37:59 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:10:06 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnadd(t_list *lst, t_list *new, size_t n)
{
	t_list	*tmp;

	if (!lst)
		return ((void*)0);
	if (n > 2)
		ft_lstnadd(lst->next, new, n - 1);
	if (n == 2)
	{
		tmp = lst->next;
		lst->next = new;
		new->next = tmp;
	}
	return (new);
}
