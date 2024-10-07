/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_clear_stk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:59:26 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:10:57 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	d_clear_stk(t_dstack *stack, void (*del)(void *))
{
	t_dnode	*current;
	t_dnode	*next;

	current = stack->top;
	while (current != NULL)
	{
		next = current->next;
		if (current->data != NULL)
			del(current->data);
		free(current);
		current = next;
		stack->size--;
	}
	stack->top = NULL;
}
