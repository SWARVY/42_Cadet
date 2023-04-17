/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:06:39 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/04/17 17:41:19 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*makeFree(void **mem)
{
	free(mem);
	mem = NULL;
	return (NULL);
}

char	*reStore(char *store)
{
	char	*newStore;
	char	*pos;
	int		len;

	pos = ft_strchr(store, '\n');
	if (!pos)
	{
		newStore = NULL;
		return (makeFree(&store));
	}
	else
		len = pos - store + 1;
	if (!store[len])
		return (makeFree(&store));
	newStore = ft_substr(store, len, ft_strlen(store) - len);
	if (!newStore)
		return (NULL);
	return (newStore);
}

char	*nextLine(char *store)
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

char	*readBuf(char *store, int fd)
{
	char	*buf;
	int		check;

	check = 1;
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (makeFree(&store));
	buf[0] = '\0';
	while (check && !ft_strchr(buf, '\n')) {
		check = read(fd, buf, BUFFER_SIZE);
		if (check)
		{
			buf[check] = '\0';
			store = ft_strjoin(store, buf);
		}
	}
	free(buf);
	if (check == -1)
		return (makeFree(store));
	return (store);
}

char	*get_next_line(int fd)
{
	static char	*store;
	char		*line;

	if (fd < 0)
		return (NULL);
	if (store && (ft_strchr(store, '\n')) || !store)
		store = readBuf(store, fd);
	if (!store)
		return (NULL);
	line = nextLine(store);
	if (!line)
		return (makeFree(&store));
	store = reStore(store);
	return (line);
}
