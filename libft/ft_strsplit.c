/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:09:42 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/12/08 14:52:08 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_words(const char *s, char c)
{
	int		i;

	i = 0;
	while (*s != '\0')
	{
		if (*s != c && (s[1] == c || s[1] == '\0'))
			i++;
		s++;
	}
	return (i);
}

static int	len_letters(const char *s, char c)
{
	int		i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

static void	**memfree(char **str, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
		free(str[j++]);
	free(str);
	return (0);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**strings;
	size_t	i;
	size_t	ii;

	if (!s || !(strings = (char**)malloc((len_words(s, c) + 1) * 8)))
		return (0);
	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			if (!(strings[i] = (char*)malloc(len_letters(s, c) + 1)))
				return ((char**)memfree(strings, i));
			ii = 0;
			while (*s != c && *s != '\0')
				strings[i][ii++] = *s++;
			strings[i++][ii] = '\0';
		}
		if (*s)
			s++;
	}
	strings[i] = 0;
	return (strings);
}
