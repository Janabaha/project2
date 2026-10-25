/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 14:44:34 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/03 15:22:30 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
/*int main()
{
	char d[6];
	char s[5];
	ft_memset(s, 'a', sizeof(s));
	ft_memcpy(d, s, sizeof(d));
	d[5] = '\0';
	printf("%s\n", d);
}*/
