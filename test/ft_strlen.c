#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tstr = [%s]\nOutput :\n\tlength = %d\n", av[1], ft_strlen(av[1]));
}