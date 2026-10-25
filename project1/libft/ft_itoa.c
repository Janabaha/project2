/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 19:13:21 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/21 19:13:28 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long n)
{
	long	num;

	num = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		num++;
		n *= -1;
	}
	while (n > 0)
	{
		num++;
		n /= 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*p;

	num = n;
	len = count(n);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	p[len] = '\0';
	if (n < 0)
	{
		p[0] = '-';
		num *= -1;
	}
	if (num == 0)
		p[0] = '0';
	while (num > 0)
	{
		p[--len] = num % 10 + '0';
		num /= 10;
	}
	return (p);
}
