#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tcharacter = %c\nOutput :\n\tisprint = %d", atoi(av[1]), ft_isprint(atoi(av[1])));
  return (0);
}