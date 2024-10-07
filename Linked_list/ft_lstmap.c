/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Monsieur_Canard <Monsieur_Canard@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:10:13 by Monsieur_Ca       #+#    #+#             */
/*   Updated: 2023/11/13 12:10:13 by Monsieur_Ca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy_lst;
	t_list	*p;

	if (!lst || !del || !f)
		return (NULL);
	cpy_lst = NULL;
	while (lst)
	{
		p = ft_lstnew(f(lst->content));
		if (!p)
		{
			ft_lstclear(&cpy_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&cpy_lst, p);
		lst = lst->next;
	}
	return (cpy_lst);
}
