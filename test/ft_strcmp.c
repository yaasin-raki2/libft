#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\ts1 = %s | s2 = %s\nOutput :\n\tremainder = %d\n",
         av[1], av[2], ft_strcmp(av[1], av[2]));
}