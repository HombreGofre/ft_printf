/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:10:52 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/25 13:56:45 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int dif_cases(char const *format, va_list ap)
{
    int *cs;
    int cnt;

    cs = 0;
    cnt = 0;
    format = malloc(sizeof(char));
    if (format[*cs] == 'c')
        cnt = c_case(ap);
    else if (format[*cs] == 's')
        cnt = s_case(ap);
    else if (format[*cs] == 'd' && format[*cs] == 'i')
        cnt = d_i_case(ap);
    else if (format[*cs] == 'p')
        cnt = p_case(ap);
    else if (format[*cs] == 'u')
        cnt = u_case(ap);
    else if (format[*cs] == 'x')
        cnt = x_case(ap);
    else if (format[*cs] == 'X')
        cnt = X_case(ap);
    free((char *)format);
    return cnt;
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
			aux += dif_cases(format, ap);
			cl++;
		}
		else
			aux += write(1, &format[cl], 1);
		cl++;
	}
	return (aux);
	va_end(ap);
}
