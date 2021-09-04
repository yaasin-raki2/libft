#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tnum = %d", ft_atoi(av[1]));
  printf("\nOutput :\n\tstr = [%s]", ft_itoa(ft_atoi(av[1])));
}