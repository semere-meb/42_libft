/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:59:52 by semebrah          #+#    #+#             */
/*   Updated: 2025/11/25 14:09:19 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr);

int	main(void)
{
	char	*tc_atoi[11] = {"", "1234", "+1234", "-1234", "--1234", "2147483647",
			"-2147483648", "-2147483649", "2147483648", "hello", NULL};

	// atoi
	printf("testing atoi\n");
	for (int i = 0; tc_atoi[i]; i++)
		printf("%s CASE: %-12s \t GOT:%-12i \t EXPECTED:%-12i\t\n", atoi(tc_atoi[i]) == ft_atoi(tc_atoi[i]) ? "\033[38;5;84m[OK]": "\033[38;5;197m[KO]", tc_atoi[i], ft_atoi(tc_atoi[i]), atoi(tc_atoi[i]));
}
