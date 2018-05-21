/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 21:34:31 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:03:55 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	myputchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int c)
{
	unsigned int	i;

	i = c;
	if (c < 0)
	{
		myputchar('-');
		i = c * -1;
	}
	if (i / 10 != 0)
		ft_putnbr(i / 10);
	myputchar(i % 10 + 48);
}
