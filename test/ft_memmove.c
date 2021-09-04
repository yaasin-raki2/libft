#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tdest = [%s] | src = [%s] | n = %d", av[1], av[2], atoi(av[3]));
  printf("\nOutput :\n\tdest= [%s]\n", (char *)ft_memmove(av[1], av[2], atoi(av[3])));
}