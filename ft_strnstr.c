/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:04:45 by semebrah          #+#    #+#             */
/*   Updated: 2025/11/25 16:05:01 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_len;

	i = 0;
	l_len = ft_strlen(little);
	while (i < len - l_len)
	{
		if (ft_strncmp(&big[i], little, len))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
