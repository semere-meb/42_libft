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
	char	*new;

	i = 0;
	while (start < len && s[start])
		i++;
	new = malloc(i + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, &s[start], i + 1);
	return (new);
}
