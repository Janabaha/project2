/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:50:39 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/05 19:23:34 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (dest_len >= n)
		return (n + src_len);
	while (*dest != '\0')
	{
		dest++;
		n--;
	}
	while (n > 1 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (src_len + dest_len);
}
/*int main()
{
	char	dest[20] = "hellooo";
	printf("%zu\n", ft_strlcat(dest," hi", 2));
	printf("%s\n", dest);
}*/
