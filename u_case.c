/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_case.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:34:03 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/26 13:21:18 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_u_decimal(unsigned int nbr, int fd, unsigned int *udec)
{
	if (nbr >= 10)
	{
		ft_u_decimal(nbr / 10, fd, udec);
		ft_u_decimal(nbr % 10, fd, udec);
	}
	else
	{
		nbr = nbr + 48;
		*udec += write (fd, &nbr, 1);
	}
}

int	u_case(va_list ap)
{
	unsigned int	u;
	unsigned int	udec;

	udec = 0;
	u = va_arg(ap, unsigned int);
	ft_u_decimal(u, 1, &udec);
	return (udec);
}
