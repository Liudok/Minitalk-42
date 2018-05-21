/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 12:26:23 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:06:12 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	dstlen(const char *s, size_t size)
{
	int		i;

	i = 0;
	while (*s++ != 0 && size--)
		i++;
	return (i);
}

static int	mystrlen(const char *s)
{
	int		i;

	i = 0;
	while (*s++ != '\0')
		i++;
	return (i);
}

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		ii;
	int		n;

	i = (size_t)mystrlen(dst);
	ii = (size_t)dstlen(dst, size);
	n = mystrlen(src);
	if (size < i)
		return (ii + n);
	while (i < (size - 1) && *src != '\0')
		dst[i++] = *src++;
	dst[i] = 0;
	return (ii + n);
}
