#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tstr = [%s] | n = [%d]", av[1], atoi(av[2]));
  ft_bzero(av[1], atoi(av[2]));
  printf("\nOutput :\n\tzeros_str= [%s]\n", av[1]);
}