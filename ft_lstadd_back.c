/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:53:42 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 15:53:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*p;

	if (!new)
		return ;
	if (!(*list))
		*list = new;
	else
	{
		p = *list;
		while (p->next != NULL)
		{
		p = p->next;
		}
	p->next = new;
	}
}
