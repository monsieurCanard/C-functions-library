/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:36:35 by marvin            #+#    #+#             */
/*   Updated: 2023/10/17 17:36:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	_strncpy(char *dest, char *src, size_t start, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[start] = src[i];
		start ++;
		i++;
	}
	dest[start] = '\0';
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	if (!dest && size == 0)
		return (0);
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
		return (src_len + size);
	if (src_len < size - dest_len)
	{
		_strncpy(dest, (char *)src, dest_len, src_len);
	}
	else
	{
		_strncpy(dest, (char *)src, dest_len, size - dest_len - 1);
	}
	return (dest_len + src_len);
}
