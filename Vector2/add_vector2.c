/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vector2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:40:11 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:51:03 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector2	add_vector2(t_vector2 v, t_vector2 w)
{
	t_vector2	result;

	result.x = v.x + w.x;
	result.y = v.y + w.y;
	return (result);
}
