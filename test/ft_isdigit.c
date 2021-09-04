#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tcharacter = %c\nOutput :\n\tisdigit = %d", av[1][0], ft_isdigit(av[1][0]));
  return (0);
}