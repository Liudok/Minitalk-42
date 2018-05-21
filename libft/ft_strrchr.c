/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 15:34:14 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/04 15:57:42 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*find;

	find = 0;
	while (*s != '\0')
		if (*s++ == (unsigned char)c)
			find = (char*)s;
	if (find)
		--find;
	if (!c)
		return ((char*)s);
	return (find);
}
