/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:46:37 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 12:38:49 by antgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	if (dest > src)
	{
		i = len - 1;
		while ((int)i >= 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}	
	}
	return (dest);
}
