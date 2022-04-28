/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:10:52 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/28 15:33:30 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dif_cases(char const *format, va_list ap, int *cs)
{
	int		prnt;

	prnt = 0;
	if (format[*cs] == 'c')
		prnt = c_case(ap);
	else if (format[*cs] == 's')
		prnt = s_case(ap);
	else if (format[*cs] == 'd' || format[*cs] == 'i')
		prnt = d_i_case(ap);
	else if (format[*cs] == 'p')
		prnt = p_case(ap);
	else if (format[*cs] == 'u')
		prnt = u_case(ap);
	else if (format[*cs] == 'x')
		prnt = x_case(ap);
	else if (format[*cs] == 'X')
		prnt = up_x_case(ap);
	else if (format[*cs] == '%')
		prnt += write(1, "%", 1);
	return (prnt);
}

int	ft_printf(char const *format, ...)
{
	int		cl;
	int		aux;
	va_list	ap;

	cl = 0;
	aux = 0;
	va_start(ap, format);
	while (format[cl])
	{
		if (format[cl] == '%')
		{
			cl++;
			aux += dif_cases(format, ap, &cl);
		}
		else
			aux += write(1, &format[cl], 1);
		cl++;
	}
	return (aux);
	va_end(ap);
}
