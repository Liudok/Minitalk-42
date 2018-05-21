/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 10:07:32 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:01:35 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstsearch(t_list *lst, const void *content, size_t size)
{
	if (!ft_memcmp(lst->content, content, size))
		return (lst);
	else if (!(lst->next))
		return (0);
	else
		return (ft_lstsearch(lst->next, content, size));
}
