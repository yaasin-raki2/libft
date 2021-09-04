#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tcharacter = %c\nOutput :\n\tisascii = %d", av[1][0], ft_isascii(av[1][0]));
  return (0);
}