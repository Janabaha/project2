/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 18:51:12 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/09 19:25:26 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	length;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s);
	if (start > length)
		return (ft_strdup(""));
	if (len > length - start)
		len = length - start;
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	ft_memcpy(p, s + start, len);
	p[len] = '\0';
	return (p);
}
