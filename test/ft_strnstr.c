#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\thaystack = [%s] | needle = [%s] | len = %d\nOutput :\n\thaystack_from_needle = [%s]\n",
         av[1], av[2], atoi(av[3]), ft_strnstr(av[1], av[2], atoi(av[3])));
}