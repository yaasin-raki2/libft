#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\ts1 = [%s] | s2 = [%s]", av[1], av[2]);
  printf("\nOutput :\n\tresult = %d\n", ft_strequ(av[1], av[2]));
}