/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:31:14 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/20 17:31:15 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main()
{
	t_list *head;
	t_list *cur;
	t_list *temp;

	head = NULL;

	ft_lstadd_front(&head, ft_lstnew("A"));
	ft_lstadd_front(&head, ft_lstnew("B"));
	ft_lstadd_front(&head, ft_lstnew("C"));

	cur = head;
	while (cur)
	{
		printf("%s\n", (char *)cur->content);
		cur = cur->next;
	}

	while (head)
	{
		temp = cur->next;
		free(cur);
		cur = temp;
	}
	return (0);
}*/
