/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:01:15 by semebrah          #+#    #+#             */
/*   Updated: 2025/11/27 15:19:15 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*head;

	len = 0;
	head = lst;
	while (head)
	{
		len++;
		head = head->next;
	}
	return (len);
}
