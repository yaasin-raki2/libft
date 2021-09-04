#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\ts = [%s] | c = %c | n = %d", av[1], atoi(av[2]), atoi(av[3]));
  printf("\nOutput :\n\ts_from_c = [%s]\n", (char *)ft_memchr(av[1], atoi(av[2]), atoi(av[3])));
}