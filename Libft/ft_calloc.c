/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:28:13 by sinhyeonho        #+#    #+#             */
/*   Updated: 2023/03/13 22:50:52 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		i;
	void	*array;

	array = malloc(count * size);
	if (!array) return (NULL);
	ft_bzero(array, count);
	return (array);
}
