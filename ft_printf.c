/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:10:52 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/27 11:27:52 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	dif_cases(char const *format, va_list ap, int *cs)
{
	int		prnt;
	char	*aux;

	prnt = 0;
	aux = ft_strdup(format);
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
	free(aux);
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

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(ft_strlen((char *)s1) + 1);
	if (!s1 || !str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
