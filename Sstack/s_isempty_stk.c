/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_isempty_stk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:55:51 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:10:20 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	s_isempty_stk(t_sstack *stack)
{
	return (stack->base == -1);
}
