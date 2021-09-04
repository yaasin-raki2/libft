#include <stdio.h>
#include <libft.h>

char shit(char c)
{
  return (ft_toupper(c));
}

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tstr = [%s]", av[1]);
  printf("\nOutput :\n\tnew_str = [%s]\n", ft_strmap(av[1], &shit));
}