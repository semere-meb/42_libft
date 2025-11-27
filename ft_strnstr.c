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

	if (len == 0)
		return ((char *)big);
	i = 0;
	while (i < len)
	{
		if (ft_strncmp(&big[i], little, len) == 0)
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
