#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tstring = [%s]", av[1]);
  ft_strclr(av[1]);
  printf("\nOutput :\n\tcleared_strring = [%s]\n", av[1]);
}