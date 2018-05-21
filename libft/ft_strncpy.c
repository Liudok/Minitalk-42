/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 11:12:57 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:07:51 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*st;

	st = dst;
	while (*src != '\0' && len--)
		*dst++ = *src++;
	if (*src == '\0')
		while (len--)
			*dst++ = 0;
	return (st);
}
