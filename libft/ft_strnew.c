/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 18:40:47 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:08:09 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	long	i;

	i = (long)size;
	if (!(str = (char*)malloc(size + 1)))
		return (0);
	while (i >= 0)
		str[i--] = 0;
	return (str);
}
