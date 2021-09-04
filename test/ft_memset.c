#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tstr = [%s] | c = %c | n = %d", av[1], atoi(av[2]), atoi(av[3]));
  printf("\nOutput :\n\tmemset_str= [%s]\n", (char *)ft_memset(av[1], atoi(av[2]), atoi(av[3])));
}