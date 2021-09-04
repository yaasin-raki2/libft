#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tcharacter = %c\nOutput :\n\tlower_character = %c", av[1][0], ft_tolower(av[1][0]));
  return (0);
}