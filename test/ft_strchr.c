#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tstr = [%s] | char_to_find = %c\nOutput :\n\tstr_from_char = [%s]\n",
         av[1], av[2][0], ft_strchr(av[1], av[2][0]));
}