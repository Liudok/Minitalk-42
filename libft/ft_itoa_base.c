/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 15:30:53 by rtulchiy          #+#    #+#             */
/*   Updated: 2018/05/02 16:50:12 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(uintmax_t a, unsigned base)
{
	int		i;

	if (!a)
		return (1);
	i = 0;
	while (a)
	{
		a /= base;
		i++;
	}
	return (i);
}

char		*ft_itoa_base(uintmax_t a, unsigned base)
{
	char	*res;
	char	*symbols;
	int		i;

	symbols = "0123456789abcdef";
	if (!(res = (char*)ft_memalloc((ft_numlen(a, base) + 1) * sizeof(char))))
		return (0);
	if (!a)
		*res = '0';
	i = ft_numlen(a, base) - 1;
	while (a)
	{
		res[i--] = symbols[a % base];
		a /= base;
	}
	return (res);
}
