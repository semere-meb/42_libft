/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:58:23 by semebrah          #+#    #+#             */
/*   Updated: 2025/11/25 16:02:04 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	if (size > 0)
	{
		while (dst_len + i < size - 1 && src[i])
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		if (dst[size] == '\0')
			dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (dst_len + i);
}
