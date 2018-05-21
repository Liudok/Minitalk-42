/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 12:12:07 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:01:19 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*memfree(t_list *node)
{
	free(node);
	return (0);
}

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*node;

	if (!(node = (t_list*)malloc(sizeof(t_list))))
		return (0);
	node->next = 0;
	if (!content)
	{
		node->content = 0;
		node->content_size = 0;
	}
	else
	{
		node->content_size = content_size;
		if (!(node->content = malloc(node->content_size)))
			return ((t_list*)memfree(node));
		ft_bzero(node->content, node->content_size);
		ft_memcpy(node->content, content, node->content_size);
	}
	return (node);
}
