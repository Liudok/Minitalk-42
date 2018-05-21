/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 18:43:09 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 19:00:19 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstn(t_list *lst, size_t n)
{
	if (!lst)
		return (0);
	if (n > 1 && lst->next)
		return (ft_lstn(lst->next, n - 1));
	else if (n <= 1)
		return (lst);
	else
		return (0);
}
