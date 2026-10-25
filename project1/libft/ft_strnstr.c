/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 18:13:14 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/06 19:21:48 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	while (*big != '\0' && len > 0)
	{
		j = 0;
		while (big[j] == little[j] && little[j] && j < len)
		{
			j++;
		}
		if (!little[j])
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}
/*int main()
{
	char big[] = "hello";
	char little[] = "llo";
	printf("%s\n", ft_strnstr(big, little, 2));
}*/
