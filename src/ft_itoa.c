#include <libft.h>
#include <stdio.h>

int ft_pow(int x, int e)
{
  int res;

  res = 1;
  while (e-- > 0)
    res *= x;
  return (res);
}

char *handle_zero()
{
  char *ascii;

  ascii = (char *)malloc(sizeof(char) * 2);
  ascii[0] = '0';
  ascii[1] = 0;
  return (ascii);
}

char *ft_itoa(int n)
{
  unsigned int un;
  char *ascii;
  unsigned int x;
  int e;
  int s;

  e = -1;
  s = 0;
  if (n == 0)
    return (handle_zero());
  else if (n < 0)
  {
    un = -n;
    s = 1;
  }
  else
    un = n;
  x = un;
  while (x && (++e + 1))
    x /= 10;
  ascii = (char *)malloc(sizeof(char) * (e + 2 + s));
  x = 0;
  if (s)
    ascii[x++] = '-';
  while (e >= 0)
    ascii[x++] = ((un / ft_pow(10, e--)) % 10) + '0';
  ascii[x] = '\0';
  return (ascii);
}