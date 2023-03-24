/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:23:38 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/03/24 13:51:36 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dupl_lst;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (0);
	ft_lstiter(lst, f);
	tmp = lst;
	while (tmp)
	{
		dupl_lst = ft_lstnew(tmp->content);
		ft_lstadd_back(&dupl_lst, tmp->content);
		tmp = tmp->content;
	}
}
