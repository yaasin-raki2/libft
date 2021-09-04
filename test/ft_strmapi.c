#include <stdio.h>
#include <libft.h>

char shit(unsigned int idx, char c)
{
  if (!(idx % 2))
    return (ft_toupper(c));
  return (c);
}

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tstr = [%s]", av[1]);
  printf("\nOutput :\n\tnew_str = [%s]\n", ft_strmapi(av[1], &shit));
}