#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  const size_t dest_size = atoi(av[4]);
  char dest[dest_size];
  size_t i = 0;
  while (av[1][i] && i < dest_size)
  {
    dest[i] = av[1][i];
    i++;
  }
  dest[i] = '\0';
  printf("%s\n", dest);
  printf("Input :\n\t");
  printf("dest = [%s] | ", dest);
  printf("src = [%s] | dest_size = %d | n = %d\n", av[2], dest_size, atoi(av[3]));
  printf("Output :\n\tdest = [%s]\n", ft_strncat(dest, av[2], atoi(av[3])));
  return (0);
}