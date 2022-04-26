/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_X_hexdec_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:20:43 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/26 14:25:40 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void    ft_x_hexdec(unsigned int num, char *base, int *hex)
{
    unsigned  int   i;
    unsigned  int   j;

    i = strlen(base);
    if (num >= i)
        ft_x_hexdec(num / i, base, hex);
    j = num % i;
    *hex += write(1, &base[j], 1);
}

int main()
{
	unsigned  int x;
	unsigned  int ux;
	int num;

	num = 0;
	x = ULONG_MAX;
	ux = ULONG_MAX;
	ft_x_hexdec(x, "0123456789abcdef", &num );
	printf("\n%x\n", x);
	ft_x_hexdec(ux, "0123456789ABCDEF", &num);
	printf("\n%X\n", ux);
}
