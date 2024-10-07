/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:15:34 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 15:20:50 by antgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((c < 32 && c != 0) || c > 127)
		return ((char *)s);
	while (s[i])
	{
		if (s[i] == c)
			return (&((char *)s)[i]);
		i++;
	}
	if (c == 0)
		return (&((char *)s)[i]);
	else
		return (NULL);
}
