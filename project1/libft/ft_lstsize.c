/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:30:02 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/20 17:30:04 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*int main()
{
	t_list *head;
	t_list *tmp;

	head = NULL;
	ft_lstadd_front(&head, ft_lstnew("A"));
	ft_lstadd_front(&head, ft_lstnew("B"));
	ft_lstadd_front(&head, ft_lstnew("C"));

	printf("%u\n", ft_lstsize(head));

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	return (0);

}*/
