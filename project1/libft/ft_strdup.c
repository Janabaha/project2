/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 17:10:38 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/07 17:17:02 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*p;

	size = ft_strlen(s);
	p = malloc(size + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s, size + 1);
	return (p);
}
