/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_vector3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:34:22 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:51:52 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	sub_vector3(t_vector3 v, t_vector3 w)
{
	t_vector3	result;

	result.x = v.x - w.x;
	result.y = v.y - w.y;
	result.z = v.z - w.z;
	return (result);
}
