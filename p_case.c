/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_case.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 11:44:53 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/25 13:07:56 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#ifndef HEXADECIMAL
# define HEXADECIMAL "0123456789abcdef"
#endif

void ft_pointer(unsigned long int nbr, char *base, int *hex)
{
	unsigned long int	i;
	unsigned long int	j;

	i = ft_strlen(base);
	if (nbr > 0)
	{
		ft_pointer(nbr / i, base, hex);
	}
	j = nbr % i;
	hex += write(1, &base[j], 1);
}

int	p_case(va_list ap)
{
	int 				*nbr;
	unsigned long int	bse;

	bse = va_arg(ap, unsigned int);
	nbr = 0;
	nbr += write(1, "0x", 2);
	ft_pointer(bse, HEXADECIMAL, nbr);
	return (*nbr);
}

size_t	ft_strlen(char *s)
{
	size_t i;

	if (s == NULL)
		return (0);
	i = 0;
	while(s[i])
		 i++;
	return (i);
}
