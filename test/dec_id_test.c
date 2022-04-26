#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void    ft_id_decimal(int nbr, int fd, int *num)
{
  if (nbr == -2147483648)
      *num += write(1, "-2147483648", 11);
  if (nbr != -2147483648)
  {
    if (nbr < 0)
    {
       * num += write(fd, "-", 1);
        nbr = -nbr;
    }
    if (nbr >= 10)
    {
        ft_id_decimal(nbr / 10, fd, num);
        ft_id_decimal(nbr % 10, fd, num);
    }
    else
    {
        nbr = nbr + 48;
        *num += write(fd, &nbr, 1);
    }
  }
}
int main()
{
  int nbr;
  int num;
  
  nbr = LONG_MAX;
  num = 0;
  ft_id_decimal(nbr, 1, &num);
  printf("\n%d", num);
  printf("\n%d", nbr);
}
