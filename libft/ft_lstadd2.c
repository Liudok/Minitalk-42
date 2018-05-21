/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/05 10:54:33 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/06 21:19:08 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd2(t_list *lst, t_list *new)
{
	if (!lst)
		return ;
	if (!lst->next)
		lst->next = new;
	else
		ft_lstadd2(lst->next, new);
}
