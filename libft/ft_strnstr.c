/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 12:28:35 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:08:22 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		ll;

	if (!little[0])
		return ((char*)big);
	while (*big != '\0' && len)
	{
		i = 0;
		ll = len;
		while (ll && big[i] == little[i])
		{
			ll--;
			if (little[++i] == 0)
				return ((char*)big);
		}
		len--;
		big++;
	}
	return (0);
}
