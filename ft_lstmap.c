/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: semebrah <semebrah@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:57:26 by semebrah          #+#    #+#             */
/*   Updated: 2025/11/27 16:40:23 by semebrah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head_lst;
	t_list	*head_new;

	if (!lst || !f || !del)
		return (NULL);
	new = malloc(sizeof(size_t));
	head_lst = lst;
	head_new = new;
	while (head_lst)
	{
		head_new = malloc(sizeof(t_list));
		head_new->content = head_lst->content;
		head_new->next = NULL;
		f(head_new);
		head_lst = head_lst->next;
		head_new = head_new->next;
	}
	return (new);
}
