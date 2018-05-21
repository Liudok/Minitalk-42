/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_degrees.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:30:06 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/06 20:52:35 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_root_of_num(long a, int d)
{
	long	num;
	int		sign;

	sign = 1;
	if (a < 0 && (d % 2))
	{
		sign = -1;
		a *= -1;
	}
	else if (a < 0 && !(d % 2))
		return (0);
	num = 1;
	while (ft_pow(num, d) < a)
		num++;
	if (ft_pow(num, d) > a)
		return (0);
	return (num * sign);
}
