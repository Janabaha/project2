/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:39:47 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/04 15:49:28 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	l;

	l = ft_strlen(src);
	if (n != 0)
	{
		while (n > 1 && *src)
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}
		*dest = '\0';
	}
	return (l);
}
/*int main()
{
	char s[] = "hello";
	char d[6];
	size_t n = 5;
	if (ft_strlcpy(d, s, n) >= n)
		printf("%s\n", "truncated");
	else
		printf("%s\n", "fits");
	printf("%s\n", d);
}*/
