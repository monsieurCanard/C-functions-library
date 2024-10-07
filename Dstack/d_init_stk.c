/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_init_stk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 17:06:09 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:11:02 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dstack	*d_init_stk(void)
{
	t_dstack	*stack;

	stack = (t_dstack *)malloc(sizeof(t_dstack));
	if (!stack)
	{
		errno = ENOMEM;
		return (NULL);
	}
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}
