/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 13:41:44 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:00:44 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && *alst && del)
	{
		if ((*alst)->next != 0)
			ft_lstdel(&(*alst)->next, del);
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = 0;
	}
}
