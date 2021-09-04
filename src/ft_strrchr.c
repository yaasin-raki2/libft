#include <libft.h>

char *ft_strrchr(const char *s, int c)
{
  int i;
  char *latest;

  i = 0;
  latest = NULL;
  while (s[i])
  {
    if (s[i] == c)
      latest = (char *)(s + i);
    i++;
  }
  if (s[i] == c)
    return (char *)(s + i);
  return (latest);
}