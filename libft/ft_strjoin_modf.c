/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_modf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 21:15:26 by rtulchiy          #+#    #+#             */
/*   Updated: 2018/02/24 21:15:42 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin_modf(char *s1, char *s2, _Bool mode1, _Bool mode2)
{
	int		i;
	int		j;
	char	*text;

	if (!s1 && !s2)
		return (0);
	if (!(text = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	i = 0;
	j = 0;
	if (s1)
		while (s1[i] != '\0')
			text[j++] = s1[i++];
	i = 0;
	if (s2)
		while (s2[i] != '\0')
			text[j++] = s2[i++];
	text[j] = 0;
	if (mode1 && s1)
		free(s1);
	if (mode2 && s2)
		free(s2);
	return (text);
}
