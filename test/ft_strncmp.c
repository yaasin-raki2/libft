#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\ts1 = %s | s2 = %s | n = %d\nOutput :\n\tremainder = %d\n",
         av[1], av[2], atoi(av[3]), ft_strncmp(av[1], av[2], atoi(av[3])));
}