/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_push_stk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:28:23 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:11:08 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	d_push_stk(t_dstack *stack, void *data)
{
	t_dnode	*new;

	new = malloc(sizeof(t_dnode));
	if (!new)
	{
		errno = ENOMEM;
		return (-1);
	}
	new->data = data;
	if (d_isempty_stk(stack) == 0)
		new->next = stack->top;
	else
		new->next = NULL;
	stack->top = new;
	stack->size++;
	return (0);
}
