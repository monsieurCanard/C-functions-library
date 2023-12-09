/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:01:03 by marvin            #+#    #+#             */
/*   Updated: 2023/10/18 15:01:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_cpy;
	unsigned int	j;

	j = 0;
	if (!s)
		return (NULL);
	if (start < len && start <= ft_strlen(s) && len >= ft_strlen(s))
		sub_cpy = malloc ((ft_strlen(s)) - start + 1);
	else if (ft_strlen(s) <= 1 || ft_strlen(s) < start)
	{
		sub_cpy = malloc (1);
		((char *)sub_cpy)[j] = '\0';
		return (sub_cpy);
	}	
	else
		sub_cpy = malloc (len + 1);
	if (!sub_cpy)
		return (NULL);
	while (j < len && ((char *)s)[start] != '\0')
	{
			((char *)sub_cpy)[j++] = ((char *)s)[start++];
	}
	((char *)sub_cpy)[j] = '\0';
	return (sub_cpy);
}
