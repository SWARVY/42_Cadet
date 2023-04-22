/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:06:39 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/04/22 14:10:11 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*make_free(char **memory)
{
	free(*memory);
	*memory = NULL;
	return (NULL);
}

char	*re_store(char *store)
{
	char	*new_store;
	char	*pos;
	int		len;

	pos = ft_strchr(store, '\n');
	if (!pos)
	{
		new_store = NULL;
		return (make_free(&store));
	}
	else
		len = pos - store + 1;
	if (!store[len])
		return (make_free(&store));
	new_store = ft_substr(store, len, ft_strlen(store) - len);
	make_free(&store);
	if (!new_store)
		return (NULL);
	return (new_store);
}

char	*backup(char *store)
{
	char	*line;
	char	*pos;
	int		len;

	pos = ft_strchr(store, '\n');
	len = pos - store + 1;
	line = ft_substr(store, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*read_buf(char *store, int fd)
{
	char	*buf;
	int		check;

	check = 1;
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (make_free(&store));
	buf[0] = '\0';
	while (check > 0 && !ft_strchr(buf, '\n'))
	{
		check = read(fd, buf, BUFFER_SIZE);
		if (check > 0)
		{
			buf[check] = '\0';
			store = ft_strjoin(store, buf);
		}
	}
	free(buf);
	if (check == -1)
		return (make_free(&store));
	return (store);
}

char	*get_next_line(int fd)
{
	static char	*store;
	char		*line;

	if (fd < 0)
		return (NULL);
	if ((store && !ft_strchr(store, '\n')) || !store)
		store = read_buf(store, fd);
	if (!store)
		return (NULL);
	line = backup(store);
	if (!line)
		return (make_free(&store));
	store = re_store(store);
	return (line);
}
