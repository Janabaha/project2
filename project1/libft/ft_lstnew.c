/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:30:43 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/20 17:30:44 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*int main()
{
	t_list	*node;
	char	*s;
	int	x;

	// case1: data is a string literal
	node = ft_lstnew("hello");
	printf("1: %s\n", (char *)node->content);
	free(node);

	// case2: data is a local int
	x = 42;
	node = ft_lstnew(&x);
	printf("2: %d\n", *(int *)node->content);
	free(node);

	// case3: data is malloc
	s = ft_strdup("world");
	node = ft_lstnew(s);
	printf("3: %s\n", (char *)node->content);
	free(node->content);
	free(node);
	return (0);
}*/
