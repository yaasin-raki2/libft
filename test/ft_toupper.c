#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tcharacter = %c\nOutput :\n\tupper_character = %c", av[1][0], ft_toupper(av[1][0]));
  return (0);
}