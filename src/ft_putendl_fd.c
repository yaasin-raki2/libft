#include <libft.h>

void ft_putendl_fd(char const *str, int fd)
{
  write(fd, str, ft_strlen(str));
  write(fd, "\n", 1);
}