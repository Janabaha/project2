/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabukhai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 16:37:28 by jabukhai          #+#    #+#             */
/*   Updated: 2026/10/25 19:33:33 by jabukhai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF
# include <unistd.h>   // for write
# include <stdlib.h>   // for NULL
# include <stdarg.h>  //for the macros
# include "libft/libft.h"

int     ft_printf(const char *format, ...);

#endif
