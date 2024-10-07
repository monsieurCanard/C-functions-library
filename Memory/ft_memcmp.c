/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:25:19 by marvin            #+#    #+#             */
/*   Updated: 2023/10/17 12:25:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *pt1, const void *pt2, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (*(unsigned char *)(pt1 + i) != *(unsigned char *)(pt2 + i))
			return (*(unsigned char *)(pt1 + i) - *(unsigned char *)(pt2 + i));
		i++;
	}
	return (0);
}
