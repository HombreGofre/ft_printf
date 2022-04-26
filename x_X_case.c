/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_X_case.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:46:08 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/26 14:30:48 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_x_hexdec(unsigned int num, char *base, int *hex)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(base);
	if (num >= i)
		ft_x_hexdec(num / i, base, hex);
	j = num % i;
	*hex += write(1, &base[j], 1);
}

int	x_case(va_list ap)
{
	int				nbr;
	unsigned  int	x;

	nbr = 0;
	x = va_arg(ap, unsigned int);
	ft_x_hexdec(x, "0123456789abcdef", &nbr);
	return (nbr);
}

int	X_case(va_list ap)
{
	int				nbr;
	unsigned int	x;

	nbr = 0;
	x = va_arg(ap, unsigned int);
	ft_x_hexdec(x, "0123456789ABCDEF", &nbr);
	return (nbr);
}
