#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tcharacter = %c\nOutput :\n\tisalnum = %d", av[1][0], ft_isalnum(av[1][0]));
  return (0);
}