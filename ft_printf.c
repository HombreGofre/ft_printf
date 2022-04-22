/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:10:52 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/22 16:40:29 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*ft_printf(char const *format, ...)
{
	int cl;
	va_list ap;

	cl = 0;
	va_start(ap, format);

	va_end(ap, fomrat);
}

int	dif_cases(char *format, va_list ap)
{
	int	*cs;
	int cnt;

	cs = 0;
	cnt = 0;
	if (format[*cs] == 'c')
		cnt = c_case(ap);
	else if (format[*cs] == 's')
		cnt = s_case(ap);
	else if (format[*cs] == 'd' && format[*cs] == 'i')
		cnt = d_i_case(ap);
	else if (format[*cs] = 'p')
		cnt = p_case(ap);
	else if (format[*cs] == 'u')
		cnt = u_case(ap);
	else if 
}
