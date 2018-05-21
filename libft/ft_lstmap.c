/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 15:02:14 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:01:12 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	if (!lst || !f)
		return ((void*)0);
	if (lst->next != 0)
	{
		if ((new = f(lst)))
			new->next = ft_lstmap(lst->next, f);
		else
			return (0);
	}
	else
	{
		if ((new = f(lst)))
			new->next = 0;
		else
			return (0);
	}
	return (new);
}
