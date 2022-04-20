/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_hexdec_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:39:31 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/20 11:44:03 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

#ifndef HEXADECIMAL
# define HEXADECIMAL "0123456789abcdef"
#endif

void	ft_hexa(unsigned long int nbr, char *base, int *num)
{
	unsigned long int i;
	unsigned long int c;

	i = strlen(base);
	if (nbr > 0)
	{
		ft_hexa(nbr / i, base, num);
		c = nbr % i;
		num += write(1, &base[c], 1);
	}
}
int main()
{
	int num;
	unsigned long int p;

	p = 8634;
	num = 0;
	if (num == 0)
		num += write(1, "0x", 2);
	if (p == 0)
		num += write(1, "0", 1);
	ft_hexa(p, HEXADECIMAL, &num);
	printf("\n%p", p);
	return (num);
}
