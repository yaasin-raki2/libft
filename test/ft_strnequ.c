#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\ts1 = [%s] | s2 = [%s] | n = %d", av[1], av[2], ft_atoi(av[3]));
  printf("\nOutput :\n\tresult = %d\n", ft_strnequ(av[1], av[2], ft_atoi(av[3])));
}