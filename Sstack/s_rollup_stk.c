/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_rollup_stk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:53:34 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:10:49 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	s_rollup_stk(t_sstack *stk)
{
	int	i;
	int	tmp;

	if (s_isempty_stk(stk))
		return ;
	tmp = stk->data[0];
	i = 0;
	while (i < stk->base)
	{
		stk->data[i] = stk->data[i + 1];
		i++;
	}
	stk->data[stk->base] = tmp;
}
