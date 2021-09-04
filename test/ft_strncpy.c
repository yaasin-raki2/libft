#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  const size_t dest_size = atoi(av[2]);
  char dest[dest_size];
  printf("Input :\n\tsrc = %s | dest_size = %d | n = %d\nOutput :\n\tdest = %s\n",
         av[1], dest_size, atoi(av[3]), ft_strncpy(dest, av[1], atoi(av[3])));
}