/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_rolldown_stk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:51:13 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:10:45 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	s_rolldown_stk(t_sstack *stk)
{
	int	i;
	int	tmp;

	if (s_isempty_stk(stk))
		return ;
	i = stk->base;
	tmp = stk->data[stk->base];
	while (i > 0)
	{
		stk->data[i] = stk->data[i - 1];
		i--;
	}
	stk->data[0] = tmp;
}
