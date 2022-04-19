
#include <stdio.h>

int main ()
{
	int n = 5;
	int *p_n;
	
	p_n = &n;
	printf("Numero: %i\n", *p_n); /* nos devuelve el valor */
	printf("Direccion: %p\n", p_n); /* nos devuelve la direccon del puntero */
}
