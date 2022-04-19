/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_print.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 15:26:48 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/19 13:06:58 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c,int fd)
{
	int	i;

	i = 0;
	i = write(fd, &c, &c);
	return (i);
}

int	c_case(va_list ap)
{
	int	i;
	int	c_case;

	i = va_arg(ap, int);
	c_case = ft_putchar(i, i);
	return (c_case);
}
