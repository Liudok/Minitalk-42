/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 12:17:46 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:07:32 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*st;

	st = s1;
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0' && n--)
		*s1++ = *s2++;
	*s1 = 0;
	return (st);
}
