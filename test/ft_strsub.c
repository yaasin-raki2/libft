#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tstr = [%s] | start = %d | len = %d", av[1], ft_atoi(av[2]), ft_atoi(av[3]));
  printf("\nOutput :\n\tsub_str = [%s]\n", ft_strsub(av[1], ft_atoi(av[2]), ft_atoi(av[3])));
}