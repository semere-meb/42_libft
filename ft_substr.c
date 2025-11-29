/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 09:49:06 by semebrah          #+#    #+#             */
/*   Updated: 2025/11/27 09:58:40 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*new;

	s_len = ft_strlen(s);
	i = start;
	while (i < s_len && i < start + len)
		i++;
	new = malloc(i - start + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, &s[start], i - start + 1);
	return (new);
}
