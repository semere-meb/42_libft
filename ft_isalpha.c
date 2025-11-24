/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:34:16 by semebrah          #+#    #+#             */
/*   Updated: 2025/11/24 15:38:47 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int ft_isalpha(int c) {
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int ft_isdigit(int c) {
	return (c >= '0' && c <= '9');
}

int ft_isalnum(int c) {
	return (ft_isalpha(c) || ft_isdigit(c));
}

int ft_isascii(int c) {
	return (c >= 0 && c < 128);
}

int ft_isprint(int c) {
	return (c > 32 && c < 127);
}

size_t ft_strlen(const char *s) {
	size_t len = 0;

	while (s[len])
		len++;

	return len;
}

void *ft_memset(void *s, int c, size_t n){
	size_t i = 0;

	while (i < n)
		((char *)s)[i++] = c;

	return s;
}

void ft_bzero(void *s, size_t n) {
	ft_memset(s, 0, n);
}

void *ft_memcpy(void *dest, const void *src, size_t n){
	size_t i = 0;

	while (i < n){
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	
	return dest;
}

void *memmove(void *dest, const void *src, size_t n){
		
}
