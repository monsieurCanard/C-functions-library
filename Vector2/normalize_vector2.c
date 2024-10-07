/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_vector2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anthony <anthony@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:40:20 by jbrousse          #+#    #+#             */
/*   Updated: 2024/10/07 11:51:20 by anthony          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector2 normalize_vector2(t_vector2 v)
{
	float magnitude;
	t_vector2 result;

	magnitude = magnitude_vector2(v);
	result.x = v.x / magnitude;
	result.y = v.y / magnitude;
	return (result);
}
