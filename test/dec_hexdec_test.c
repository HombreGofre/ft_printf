/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_hexdec_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:39:31 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/26 11:51:57 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

#ifndef HEXADECIMAL
# define HEXADECIMAL "0123456789abcdef"
#endif

void	ft_hexa(unsigned long int nbr, char *base, int *num)
{
	unsigned long int i;
	unsigned long int c;

	i = strlen(base);
	if (nbr >= 16)
	{
		ft_hexa(nbr / i, base, num);
	}
	c = nbr % i;
	num += write(1, &base[c], 1);
}
int main()
{
	int num;
	double p;
	unsigned long int p2;

	p = LONG_MAX;
	p2 = LONG_MIN;
	num = 0;
	if (num == 0)
		num += write(1, "0x", 2);
	ft_hexa(p, HEXADECIMAL, 0);
	printf("\n%p", p);
	printf("\n%u", sizeof(long));
	return (num);
}
