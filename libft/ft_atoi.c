/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 14:55:37 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 12:51:58 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sign(const char *str)
{
	if (*str == '-')
		return (-1);
	return (1);
}

int			ft_atoi(const char *str)
{
	unsigned long int	num;
	int					sign;

	while (ft_iswhitespaces(*str))
		str++;
	num = 0;
	if ((sign = check_sign(str)) == -1 || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + (*str++ - 48);
	if (num >= 9223372036854775807 && sign == 1)
		return (-1);
	else if (num > 9223372036854775807 && sign == -1)
		return (0);
	return ((int)num * sign);
}
