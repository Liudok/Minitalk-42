/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 12:58:40 by rtulchiy          #+#    #+#             */
/*   Updated: 2018/04/17 13:00:40 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc_modf(void *ptr, size_t newsize, size_t oldsize)
{
	void	*new;

	new = ft_memalloc(newsize);
	if (ptr)
	{
		ft_memcpy(new, ptr, oldsize);
		free(ptr);
	}
	return (new);
}
