/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgabri <antgabri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:45:09 by antgabri          #+#    #+#             */
/*   Updated: 2023/11/07 13:45:09 by antgabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		len_s2;
	size_t		len_s1;
	size_t		cursor;

	i = 0;
	if (!s1 || !s2)
		return ((char *)s1);
	len_s2 = ft_strlen ((char *)s2);
	len_s1 = ft_strlen ((char *)s1);
	while (i <= n && i <= len_s1)
	{
		cursor = 0;
		{
			while (s1[i + cursor] && s2[cursor]
				&& i + cursor < n && cursor < len_s2
				&& s1[i + cursor] == s2[cursor])
				cursor++;
			if (cursor == len_s2)
				return (&((char *)s1)[i]);
		}
		i++;
	}
	return (NULL);
}
