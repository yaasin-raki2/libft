#include <stdio.h>

int ft_atoi(char *str);

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tstr = [%s]\nOutput :\n\tnumber = %d\n", av[1], ft_atoi(av[1]));
}