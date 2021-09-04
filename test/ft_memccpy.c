#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tdest = [%s] | src = [%s] | c = %c | n = %d", av[1], av[2], ft_atoi(av[3]), ft_atoi(av[4]));
  printf("\nOutput :\n\tdest= [%s]\n", (char *)ft_memccpy(av[1], av[2], ft_atoi(av[3]), ft_atoi(av[4])));
}