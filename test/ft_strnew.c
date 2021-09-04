#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tsize = %d", atoi(av[1]));
  printf("\nOutput :\n\tmemory = [%p]\n", ft_strnew(atoi(av[1])));
}