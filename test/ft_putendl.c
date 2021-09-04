#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tstr = [%s]", av[1]);
  printf("\nOutput :\n\t");
  ft_putendl(av[1]);
}