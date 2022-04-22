/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:10:52 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/22 19:02:00 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	*ft_printf(char const *format, ...)
{
	int		cl;
	va_list	ap;

	cl = 0;
	va_start(ap, format);
	while (format[cl])
	{
		if (fomrmat[cl] == '%')
		{
			cl = dif_cases(format, ap);
			cl++;
		}
		else
			cl = write(1, fomrat[ap], 1);
		cl++;
	}
	va_end(ap);
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
	else if (format[*cs] == 'x')
		cnt = x_case(ap);
	else if (format[*cs] == 'X')
		cnt = X_case(ap);
	free(format);
	return cnt;
}
