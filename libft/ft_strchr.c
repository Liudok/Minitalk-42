/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 15:16:31 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/04 15:38:04 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if ((unsigned char)c == 0)
	{
		while (s[i] != '\0')
			i++;
		return (&((char*)s)[i]);
	}
	while (s[i] != '\0')
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return (&((char*)s)[i]);
		i++;
	}
	return (0);
}
