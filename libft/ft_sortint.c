/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:53:45 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:04:48 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_sortint(int *arr, size_t size)
{
	int				tmp;
	unsigned long	i;
	unsigned long	ii;

	if (!arr)
		return (0);
	i = 0;
	while (i++ < (size - 1))
	{
		ii = 0;
		while (ii < (size - 1))
		{
			if (arr[ii] > arr[ii + 1])
			{
				tmp = arr[ii];
				arr[ii] = arr[ii + 1];
				arr[ii + 1] = tmp;
			}
			ii++;
		}
	}
	return (arr);
}
