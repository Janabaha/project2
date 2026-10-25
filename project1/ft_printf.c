/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 16:40:46 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/25 20:02:25 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	count;
	char	c;
	char	*s;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			format++;
			count++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				ft_putchar_fd(&c, 1);
				format++;
				count++;
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				if (!s)
				{
					ft_putstr_fd("(null)", 1);
					count += 6;
				}
				else
				{
					ft_putstr_fd(s, ft_strlen(s));
					count += ft_strlen(s);
				}
				format++;
			}
			else if (*format == '%')
			{
				ft_putchar_fd('%', 1); 
				format++;
				count++;
			}
		}
	}
	return (count);
	va_end(args);
}
/*#include <stdio.h>
int main()
{
	int i = ft_printf("hello %c\n", 'j');
	printf("returned %d", i);
	return (0);
}*/
