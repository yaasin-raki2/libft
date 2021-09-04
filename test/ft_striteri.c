#include <stdio.h>
#include <libft.h>

void shit(unsigned int idx, char *c)
{
  if (!(idx % 2))
    *c = ft_toupper(*c);
}

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tstring = [%s]", av[1]);
  ft_striteri(av[1], &shit);
  printf("\nOutput :\n\tmodified_strring = [%s]\n", av[1]);
}