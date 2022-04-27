/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_i_case.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:17:21 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/27 11:19:02 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_id_decimal( int nbr, int fd, int *dec)
{
	if (nbr == -2147483648)
		*dec = write(1, "-2147483648", 11);
	if (nbr != -2147483648)
	{
		if (nbr < 0)
		{
			*dec += write(1, "-", 1);
			nbr = -nbr;
		}
		if (nbr >= 10 && nbr != -2147483648)
		{
			ft_id_decimal(nbr / 10, fd, dec);
			ft_id_decimal(nbr % 10, fd, dec);
		}
		else
		{
			nbr = nbr + 48;
			*dec += write(fd, &nbr, 1);
		}
	}
}

int	d_i_case(va_list ap)
{
	int	nbr;
	int	dec;

	dec = 0;
	nbr = va_arg(ap, int);
	ft_id_decimal(nbr, 1, &dec);
	return (dec);
}
