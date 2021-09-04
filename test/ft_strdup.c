#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tsrc = [%s]\nOutput :\n\tdest = [%s]\n", av[1], ft_strdup(av[1]));
}