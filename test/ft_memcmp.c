#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\ts1 = [%s] | s2 = [%s] | n = %d", av[1], av[2], atoi(av[3]));
  printf("\nOutput :\n\tres = %d\n", (int)ft_memcmp(av[1], av[2], atoi(av[3])));
}