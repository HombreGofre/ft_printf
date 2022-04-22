/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_X_case.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:46:08 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/22 18:44:03 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_x_hexdec(unsigned long int num, char *base, int *hex)
{
	unsigned long int	i;
	unsigned long int	j;

	i = ft_strlen(base);
	if (num > 0)
		ft_x_hexdec(nbr / i, base);
	j = nbr % i;
	hex += write(1, &base[j], 1);
}

int	x_case(va_list ap)
{
	int	*nbr;
	unsigned long int x;

	nbr = 0;
	x = va_arg(ap, unsigned int);
	ft_x_hexdec(x, "0123456789abcdef", nbr);
	return (nbr);
}

int	X_case(va_list ap);
{
	int *nbr;
	unsigned long int x;

	nbr = 0;
	x = va_arg(ap, unsigned int);
	ft_x_hexdec(x, "013456789ABCDEF", nbr);
	return (nbr);
}
