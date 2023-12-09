/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:00:48 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 14:12:31 by antgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	long_src;

	i = 0;
	long_src = ft_strlen((char *)src);
	if (long_src + 1 < size)
		dest = ft_memcpy(dest, src, long_src + 1);
	else if (size != 0)
	{
		dest = ft_memcpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (long_src);
}
