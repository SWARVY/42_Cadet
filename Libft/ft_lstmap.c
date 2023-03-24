/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyeoshin <hyeoshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:23:38 by hyeoshin          #+#    #+#             */
/*   Updated: 2023/03/24 15:21:21 by hyeoshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dupl_lst;
	t_list	*tmp;
	void	*t_content;

	if (!lst || !f || !del)
		return (0);
	dupl_lst = 0;
	while (lst)
	{
		t_content = (*f)(lst->content);
		tmp = ft_lstnew(t_content);
		if (!tmp)
		{
			del(t_content);
			ft_lstclear(&dupl_lst, del);
			return (0);
		}
		ft_lstadd_back(&dupl_lst, tmp);
		lst = lst->next;
	}
	return (dupl_lst);
}
