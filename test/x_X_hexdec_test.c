/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_X_hexdec_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 16:20:43 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/22 16:23:03 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main()
{
	int i;
	int j;

	i = 2847982;
	j = 2847982;

	printf("Hexadecimal en minusculas ---> %x\n", i);
	printf("Hexadecimal en mayusculas ---> %X", j);
}
