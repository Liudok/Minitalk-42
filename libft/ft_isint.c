/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 16:29:27 by rtulchiy          #+#    #+#             */
/*   Updated: 2018/05/15 16:29:28 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

_Bool		ft_isint(char *num)
{
	_Bool	neg;
	int		len;

	if (!ft_isnumber(num))
		return (0);
	neg = *num == '-' ? 1 : 0;
	num += *num == '-' || *num == '+' ? 1 : 0;
	while (*num == '0')
		num++;
	len = ft_strlen(num);
	if (len > 10)
		return (0);
	else if (len == 10 && ((!neg && ft_strcmp(num, "2147483647") > 0) ||
							(neg && ft_strcmp(num, "2147483648") > 0)))
		return (0);
	return (1);
}
