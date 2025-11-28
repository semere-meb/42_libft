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
	size_t	len_cmp;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (!big || !little)
		return (NULL);
	if (!little[i])
		return ((char *)big);
	if (len < little_len)
		len_cmp = len;
	else
		len_cmp = little_len;
	while (len && i < len && big[i] && len >= little_len)
	{
		if (!ft_strncmp(&big[i], little, len_cmp))
			return ((char *)(&big[i]));
		i++;
	}
	return (NULL);
}
