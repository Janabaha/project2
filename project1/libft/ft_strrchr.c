/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:37:08 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/03 17:52:05 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == (char)c)
			p = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)p);
}
/*int main()
{
	char s[] = "helleo";
	int c = 'e';
	printf("%s\n", ft_strrchr(s, c));
}*/
