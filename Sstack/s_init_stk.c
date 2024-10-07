/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_init_stk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:44:50 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:10:17 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	s_init_stk(t_sstack *stack, size_t size)
{
	stack->data = (int *)malloc(sizeof(int) * size);
	if (!stack->data)
	{
		errno = ENOMEM;
		return (-1);
	}
	stack->base = -1;
	stack->size = size;
	return (size);
}
