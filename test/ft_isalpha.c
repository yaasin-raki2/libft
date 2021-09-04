#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tcharacter = %c\nOutput :\n\tisalpha = %d", av[1][0], ft_isalpha(av[1][0]));
  return (0);
}