/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:19:27 by marvin            #+#    #+#             */
/*   Updated: 2023/10/18 16:19:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int ft_verif_set(char const c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	size_t start;
	size_t end;

	end = 0;
	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1) - 1;
	while (ft_verif_set(s1[start], set) == 1)
		start++;
	while (ft_verif_set(s1[end], set) == 1)
		end--;
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}
