#include <libft.h>

char *ft_strdup(char *src)
{
  char *dest;
  int len;
  int i;

  len = 0;
  while (src[len])
    len++;
  dest = (char *)malloc(sizeof(char) * (len + 1));
  i = 0;
  while (src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}