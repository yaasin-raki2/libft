#include <libft.h>

void ft_putstr(char const *str)
{
  write(1, str, ft_strlen(str));
}