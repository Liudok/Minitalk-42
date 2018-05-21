/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 11:05:58 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:06:00 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mystrlen(const char *s)
{
	int		i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char		*ft_strjoin(const char *s1, const char *s2)
{
	char	*text;
	char	*st;

	if (!s1 && !s2)
		return (0);
	if (!(text = (char *)malloc(mystrlen(s1) + mystrlen(s2) + 1)))
		return (0);
	st = text;
	if (s1)
		while (*s1 != '\0')
			*text++ = *s1++;
	if (s2)
		while (*s2 != '\0')
			*text++ = *s2++;
	*text = 0;
	return (st);
}
