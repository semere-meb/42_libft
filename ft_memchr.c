/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:05:11 by semebrah          #+#    #+#             */
/*   Updated: 2025/11/25 16:05:24 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*_s;
	unsigned char		_c;

	_c = c;
	i = 0;
	_s = s;
	while (i < n - 1 && _s[i] != _c)
		i++;
	if (_s[i] == _c)
		return ((void *)(s + i));
	return (NULL);
}
