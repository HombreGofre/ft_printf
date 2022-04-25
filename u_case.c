/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_case.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:34:03 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/25 13:10:02 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_u_decimal(unsigned int nbr, int fd)
{
	if (nbr >= 10)
	{
		ft_u_decimal(nbr / 10, fd);
		ft_u_decimal(nbr % 10, fd);
	}
	else
	{
		nbr = nbr + 48;
		write (fd, &nbr, 1);
	}
}

int	u_case(va_list ap)
{
	unsigned int	u;

	u = va_arg(ap, unsigned int);
	ft_u_decimal(u, 1);
	return (u);
}
