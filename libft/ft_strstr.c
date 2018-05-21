/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 11:54:42 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/04 15:58:02 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *big, const char *little)
{
	int		i;

	if (!little[0])
		return ((char*)big);
	while (*big != '\0')
	{
		i = 0;
		while (big[i] == little[i])
			if (little[++i] == '\0')
				return ((char*)big);
		big++;
	}
	return (0);
}
