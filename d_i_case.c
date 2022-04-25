/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_i_case.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:56:02 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/25 13:00:17 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_id_decimal(int nbr, int fd)
{
	int num;

	num = 0;
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	if (nbr != -2147483648)
	{
		if (nbr < 0)
		{
			num += write(1, "-", 1);
			nbr = -nbr;
		}
		if (nbr >= 10 && nbr != -2147483648)
		{
			ft_id_decimal(nbr / 10, fd);
			ft_id_decimal(nbr % 10, fd);
		}
		else
		{
			nbr = nbr + 48;
			write (fd, &nbr, 1);
		
		}
	}
}

int	d_i_case(va_list ap)
{
	int	nbr;

	nbr = va_arg(ap, int);
	ft_id_decimal(nbr, 1);
	return (nbr);
}
