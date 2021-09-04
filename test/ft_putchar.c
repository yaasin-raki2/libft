#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tcharacter = %c", av[1][0]);
  printf("\nOutput :\n\t");
  ft_putchar(av[1][0]);
}