#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tstr = [%s] | sep = %c", av[1], av[2][0]);
  printf("\nOutput :\n\tstr_without_spaces = [");
  char **arr = ft_strsplit(av[1], av[2][0]);
  int i = 0;
  while (arr[i])
  {
    printf("%s", arr[i]);
    if (arr[i + 1])
      printf(", ");
    i++;
  }
  printf("]");
}