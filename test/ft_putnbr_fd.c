#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <libft.h>

int ft_create_empty_fd(char *filename)
{
  int fd;

  fd = open(filename, O_CREAT | O_WRONLY);
  return fd;
}

void ft_display_file(char *filename)
{
  int fd_to_read;
  char c;

  fd_to_read = open(filename, 0);
  while (read(fd_to_read, &c, 1))
    write(1, &c, sizeof(c));
  close(fd_to_read);
}

int main(int ac, char **av)
{
  (void)ac;
  printf("Input :\n\tnum = %d", ft_atoi(av[1]));
  printf("\nOutput :\n\tfd's content : ");
  char filename[] = "ft_putnbr_fd.txt";
  int fd = ft_create_empty_fd(filename);
  char str_mod[] = "0777";
  int mod = strtol(str_mod, 0, 8);
  chmod(filename, mod);
  ft_putnbr_fd(ft_atoi(av[1]), fd);
  ft_display_file(filename);
  remove(filename);
}