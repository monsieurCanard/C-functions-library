/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:33:05 by marvin            #+#    #+#             */
/*   Updated: 2023/10/24 16:33:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*p;

	p = lst;
	if (!lst || !f)
		return ;
	while (p->next)
	{	
		p = lst;
		f(p->content);
		lst = lst->next;
	}
	p->next = NULL;
}

/*
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			len;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, &s[i]);
		i++;
	}
}
*/