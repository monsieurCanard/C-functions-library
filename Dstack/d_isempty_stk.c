/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_isempty_stk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 18:13:30 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:11:04 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	d_isempty_stk(t_dstack *stack)
{
	if (stack->size == 0)
		return (1);
	return (0);
}
