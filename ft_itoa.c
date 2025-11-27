/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:30:42 by semebrah          #+#    #+#             */
/*   Updated: 2025/11/27 12:27:50 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_populate(char *str, long n, int is_negative)
{
	size_t	i;

	i = 0;
	if (n == 0)
		str[i] = '0';
	if (is_negative)
		str[i++] = '-';
	while (n > 0)
	{
		str[i++] = '0' + n % 10;
		n /= 10;
	}
	str[i] = '\0';
	return (str);
}

static size_t	ft_count_chars(long _n)
{
	size_t	char_count;

	char_count = 0;
	if (_n == 0)
		return (1);
	while (_n > 0)
	{
		char_count++;
		_n /= 10;
	}
	return (char_count);
}

char	*ft_itoa(int n)
{
	long	_n;
	size_t	i;
	char	*str;

	_n = n;
	i = 0;
	if (_n < 0)
		_n *= -1;
	str = malloc((n < 0) + ft_count_chars(_n) + 1);
	if (!str)
		return (NULL);
	return (ft_populate(str, _n, (n < 0)));
}
