#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tmemory = [%p]", av[1]);
  ft_memdel((void **)&av[1]);
  printf("\nOutput :\n\tfreed_memory = [%p]\n", av[1]);
}