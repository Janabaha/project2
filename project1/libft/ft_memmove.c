/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 17:51:51 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/18 18:35:01 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				count;

	if (!src && !dst)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	count = 0;
	if (d > s)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
	{
		while (count < len)
		{
			d[count] = s[count];
			count++;
		}
	}
	return (dst);
}
/*int main()
{
	char t[] = "abcde";
	printf("%s\n", (char *)ft_memmove(t+2, t, 3));
}*/
