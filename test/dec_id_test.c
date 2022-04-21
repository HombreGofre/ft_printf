#include <stdio.h>
#include <unistd.h>

void    ft_id_decimal(int nbr, int fd/*, int *num*/)
{
  if (nbr == -2147483648)
      write(1, "-2147483648", 11);
  if (nbr != -2147483648)
  {
    if (nbr < 0)
    {
        write(fd, "-", 1);
        //num += 1;
        nbr = -nbr;
    }
    if (nbr >= 10)
    {
        //*num += 1;
        ft_id_decimal(nbr / 10, fd);
        ft_id_decimal(nbr % 10, fd);
    }
    else
    {
        nbr = nbr + 48;
        write(fd, &nbr, 1);
        //*num += 1;
    }
  }
}
int main()
{
  //int num;
  int nbr;
  
  //num = 0;
  nbr = 546789;
  ft_id_decimal(nbr, 1);
  //return (num);
}
