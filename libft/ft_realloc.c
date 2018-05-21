/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 12:58:40 by rtulchiy          #+#    #+#             */
/*   Updated: 2018/02/04 15:20:35 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t newsize)
{
	void	*new;

	new = ft_memalloc(newsize);
	if (ptr)
	{
		if (ft_strlen((char*)ptr) > newsize)
			ft_memcpy(new, ptr, newsize);
		else
			ft_memcpy(new, ptr, ft_strlen((char*)ptr));
		free(ptr);
	}
	return (new);
}
