/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 11:33:06 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/28 19:23:51 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char	*str1 = "Macarrones";
	char	str2[7] = "Manuel";
	int		p;
	int		*nl;

	nl = NULL;
	p = 897456;
	ft_printf("Test de nuestra librería printf.\n");
	ft_printf("-------------------------------\n");
	ft_printf("%c %c %c %c\n", 'H', 'o', 'l', 'a');
	ft_printf("-------------------------------\n");
	ft_printf("Me gustan los %s\n", str1);
	ft_printf("-------------------------------\n");
	ft_printf("Direccion de un puntero %p\n", nl);
	ft_printf("-------------------------------\n");
	ft_printf("Decimal entero. d:%d --- i:%i\n", p, p);
	ft_printf("-------------------------------\n");
	ft_printf("Decimal sin signo u:%u\n", p);
	ft_printf("-------------------------------\n");
	ft_printf("Hexadecimal x:%x  X:%X\n", p, p);
	ft_printf("-------------------------------\n");
	ft_printf("Mixed test --- %s %c %d %p %x\n", str2, 'c', p, str1, p);
	ft_printf("-------------------------------\n");
	ft_printf("%");
	system("leaks a.out");
	return (0);
}
