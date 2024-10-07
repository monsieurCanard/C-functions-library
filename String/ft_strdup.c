/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:31:07 by marvin            #+#    #+#             */
/*   Updated: 2023/10/18 12:31:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy;
	int		src_len;
	int		i;

	i = 0;
	src_len = ft_strlen(src);
	cpy = malloc((src_len * sizeof(char)) + 1);
	if (cpy == NULL)
		return (NULL);
	while ((src)[i])
	{
		((char *)cpy)[i] = ((char *)src)[i];
		i++;
	}
	((char *)cpy)[i] = '\0';
	return (cpy);
}
