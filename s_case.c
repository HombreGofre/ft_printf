/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_case.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:42:25 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/25 12:57:47 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str, int fd)
{
	int		i;
	int		s;

	s = 0;
	i = 0;
	if (!str)
	{
		s += write(fd, "(NULL)", 6);
		return (s);
	}
	while (str[i])
	{
		s += write(fd, &str[i], 1);
		i++;
	}
	return (s);
}

int	s_case(va_list ap)
{
	char	*str;
	int		s_case;

	str = va_arg(ap, char *);
	s_case = ft_putstr(str, 1);
	return (s_case);
}
