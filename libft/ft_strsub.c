/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 10:49:47 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:08:57 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*st_sub;

	if (!s)
		return ((void*)0);
	if (!(sub = (char *)malloc(len + 1)))
		return (0);
	st_sub = sub;
	while (len--)
		*sub++ = s[start++];
	*sub = 0;
	return (st_sub);
}
