/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortarr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 19:37:04 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/07 11:12:02 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	mystrlen(char **s)
{
	int		i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char		**ft_sortarr(char **s)
{
	int		i;
	int		len;
	char	*tmp;

	if (!s || !(*s))
		return (0);
	len = mystrlen(s);
	while (len-- - 1)
	{
		i = 0;
		while (s[i + 1])
		{
			if (ft_strcmp(s[i], s[i + 1]) > 0)
			{
				tmp = s[i];
				s[i] = s[i + 1];
				s[i + 1] = tmp;
			}
			i++;
		}
	}
	return (s);
}
