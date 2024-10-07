/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 13:02:32 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:51:55 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	vector3(float x, float y, float z)
{
	t_vector3	coord;

	coord.x = x;
	coord.y = y;
	coord.z = z;
	return (coord);
}
