#include <libft.h>

void ft_putnbr(int n)
{
  unsigned int un;

  un = n;
  if (n < 0)
  {
    un = -n;
    ft_putchar('-');
  }
  if (un >= 10)
  {
    ft_putnbr(un / 10);
    ft_putnbr(un % 10);
  }
  else
    ft_putchar(un + '0');
}