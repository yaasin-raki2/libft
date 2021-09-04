#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\ts1 = [%s] | s2 = [%s]", av[1], av[2]);
  printf("\nOutput :\n\tjoined_strs = [%s]\n", ft_strjoin(av[1], av[2]));
}