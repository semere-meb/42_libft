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

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_count_words(char const *s, char c)
{
	size_t	wordcount;
	size_t	i;
	size_t	start;

	wordcount = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		start = 0;
		while (s[i] && s[i] == c)
			i++;
		if (i > start)
			wordcount++;
	}
	return (wordcount);
}

char	*ft_assign_str(char const *s, size_t start, size_t end)
{
	char	*str;

	str = malloc(end - start + 1);
	while (start < end)
	{
		str[start] = s[start];
		start++;
	}
	str[start] = '\0';
	return (str);
}

char	**ft_assign_arr(char **arr, char const *s, char c)
{
	size_t	wordcount;
	size_t	i;
	size_t	start;

	wordcount = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		start = i;
		while (s[i] && s[i] == c)
			i++;
		if (i > start)
		{
			arr[wordcount] = ft_assign_str(s, start, i);
			if (!arr[wordcount])
			{
				return (NULL);
				while (wordcount)
					free(arr[wordcount--]);
			}
		}
		wordcount++;
	}
	arr[wordcount] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	wordcount;
	char	**arr;

	wordcount = ft_count_words(s, c);
	arr = malloc(sizeof(char *) * (wordcount + 1));
	if (!arr)
		return (NULL);
	return (ft_assign_arr(arr, s, c));
	return (arr);
}

int	main(void)
{
	char	**res;
	size_t	i;

	res = ft_split("   hello world i kkk   ", ' ');
	i = 0;
	while (res[i])
		printf("\"%s\"\n", res[i++]);
}
