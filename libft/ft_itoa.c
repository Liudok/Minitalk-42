/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 20:45:59 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/12/25 16:00:31 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int		i;

	if (!n)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*num;
	int		i;

	i = numlen(n);
	if (!(num = (char *)ft_memalloc(i + 1)))
		return (0);
	if (n < 0)
		num[0] = '-';
	num[i--] = 0;
	if (!n)
		num[i] = '0';
	while (n)
	{
		if (n < 0)
			num[i--] = (n % 10) * -1 + 48;
		else
			num[i--] = n % 10 + 48;
		n /= 10;
	}
	return (num);
}
