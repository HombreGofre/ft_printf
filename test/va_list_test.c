/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_list_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:58:49 by cnunez-s          #+#    #+#             */
/*   Updated: 2022/04/19 13:01:09 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h> /* lib

void foo(char *fmt, ...)
{
   	va_list ap;
	int d;
	char c, *s;

	va_start(ap, fmt);   /*inicializate ap value whit fmt */
	while (*fmt)
	{
		switch(*fmt++)
		{
 		  case 's':                       /* string */
    		 s = va_arg(ap, char *);
    		 printf("string %s\n", s);
    		 break;
   		 case 'd':                       /* int */
    		 d = va_arg(ap, int);
    		 printf("int %d\n", d);
    		 break;
  		 case 'c':                       /* char */
    		 /*  char is promoted to int. */
     		c = va_arg(ap, int);
    		printf("char %c\n", c);
    		break;
  		}
 	}
 	va_end(ap); /*it's necesary close the ap at the end */
}
int main()
{
  char s[20] = "Hello World";
  int c = 98;
  int d = 100;
  char fmt[4] = "sdc\0"; /*when we creat our string we need to put 0 at the aend */
  foo(fmt, s, d, c);
}
