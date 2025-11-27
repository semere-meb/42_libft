/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:50:48 by semebrah          #+#    #+#             */
/*   Updated: 2025/11/27 11:24:30 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_count_words(const char *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		words++;
	}
	return (words);
}

static char	*ft_allocate_str(const char *s, size_t start, size_t end)
{
	char	*new;

	new = malloc(end - start);
	if (!new)
		return (NULL);
	while (start < end && s[start])
	{
		new[start] = s[start];
		start++;
	}
	return (new);
}

static char	**ft_clean(char **str_arr, size_t words)
{
	while (words >= 0)
	{
		free(str_arr[words]);
		words--;
	}
	free(str_arr);
	return (NULL);
}

static char	**ft_allocate_arr(char **str_arr, const char *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	start;
	size_t	end;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		str_arr[words] = ft_allocate_str(s, start, end);
		if (!str_arr[words])
			return (ft_clean(str_arr, words));
		words++;
	}
	str_arr[words] = NULL;
	return (str_arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	i;
	char	**str_arr;

	words = ft_count_words(s, c);
	i = 0;
	str_arr = malloc(words + 1);
	if (!str_arr)
		return (NULL);
	return (ft_allocate_arr(str_arr, s, c));
}
