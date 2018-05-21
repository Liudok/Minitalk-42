/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 12:34:50 by rtulchiy          #+#    #+#             */
/*   Updated: 2018/04/17 13:51:17 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		ft_node_del(t_list **lst, t_list *del_node, int ret)
{
	t_list		*tmp;

	if (*lst == del_node)
	{
		*lst = (*lst)->next;
		free(del_node->content);
		free(del_node->next);
		free(del_node);
		return (ret);
	}
	tmp = *lst;
	while (tmp && tmp->next != del_node)
		tmp = tmp->next;
	tmp ? (tmp->next = del_node->next) : 0;
	del_node->content ? free(del_node->content) : 0;
	del_node->next ? free(del_node->next) : 0;
	free(del_node);
	return (ret);
}

static t_list	*ft_search_lst(t_list **lst, const int fd)
{
	t_list		*tmp;
	int			*intfd;

	if (!(intfd = (int*)ft_memalloc((BUFF_SIZE + 5) * sizeof(char))))
		return (0);
	*intfd = fd;
	if (!(*lst))
	{
		tmp = ft_lstnew(intfd, BUFF_SIZE + 5);
		ft_lstadd(lst, tmp);
	}
	else
	{
		tmp = *lst;
		while (tmp && fd != *(int*)(tmp->content))
			tmp = tmp->next;
		if (!tmp && (tmp = ft_lstnew(intfd, BUFF_SIZE + 5)))
		{
			ft_lstadd(lst, tmp);
			*lst = tmp;
		}
	}
	free(intfd);
	return (tmp);
}

static int		re_strs(char **line, char *str, t_list **lst, t_list *tmp)
{
	char	*nl;
	_Bool	end;

	end = (*str ? 0 : 1);
	nl = ft_memchr(str, '\n', ft_strlen(str));
	nl ? ft_strcpy((char*)(tmp->content + 4), nl + 1) : 0;
	ft_bzero(nl, ft_strlen(nl));
	*line = str;
	return (!end ? 1 : ft_node_del(lst, tmp, 0));
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*lst;
	t_list			*tmp;
	char			*str;
	int				len;
	int				n;

	n = 0;
	str = (char*)ft_memalloc((BUFF_SIZE + 1) * sizeof(char));
	tmp = ft_search_lst(&lst, fd);
	if (*(char*)(tmp->content + 4) &&\
		ft_strcpy(str, (char*)(tmp->content + 4)) && (n += ft_strlen(str)))
		ft_bzero(tmp->content + 4, BUFF_SIZE);
	while (!ft_memchr(str, '\n', ft_strlen(str)))
	{
		if (!(str = (char*)ft_realloc(str, BUFF_SIZE + 1 + n)))
			return (-1);
		if ((len = read(fd, str + n, BUFF_SIZE)) == -1)
			return (ft_node_del(&lst, tmp, -1));
		!len ? free(str) : 0;
		!len ? (str = 0) : 0;
		if (len < BUFF_SIZE)
			break ;
		n += BUFF_SIZE;
	}
	return (re_strs(line, str, &lst, tmp));
}
