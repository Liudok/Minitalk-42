/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 20:00:25 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:06:47 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mystrlen(const char *s)
{
	int		i;

	i = 0;
	while (*s++ != '\0')
		i++;
	return (i);
}

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*st;

	st = 0;
	if (s && f)
	{
		if (!(str = (char *)malloc(mystrlen(s) + 1)))
			return (0);
		st = str;
		while (*s != '\0')
			*str++ = f(*s++);
		*str = 0;
	}
	return (st);
}
