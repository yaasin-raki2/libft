#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\thaystack = [%s] | needle = [%s]\nOutput :\n\thaystack_from_needle = [%s]\n",
         av[1], av[2], ft_strstr(av[1], av[2]));
}