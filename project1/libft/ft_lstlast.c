/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:29:53 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/20 17:29:57 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*int main()
{
	t_list *head;
	t_list *temp;

	head = NULL;
	ft_lstadd_front(&head, ft_lstnew("A"));
	ft_lstadd_front(&head, ft_lstnew("B"));
	ft_lstadd_front(&head, ft_lstnew("C"));

	printf("last: %s\n", (char *)ft_lstlast(head)->content);
	printf("empty: %p\n", (void *)ft_lstlast(NULL));

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}*/
