/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_pop_stk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:34:37 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:11:06 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*d_pop_stk(t_dstack *stack)
{
	void	*data;
	t_dnode	*tmp;

	data = stack->top->data;
	tmp = stack->top->next;
	free(stack->top);
	stack->top = tmp;
	stack->size--;
	return (data);
}
