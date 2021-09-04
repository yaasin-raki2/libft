#include <libft.h>

char *ft_strncat(char *dest, char *src, size_t n)
{
  size_t i;
  size_t j;

  i = 0;
  while (dest[i])
    i++;
  j = 0;
  while (src[j] && j < n)
  {
    dest[i] = src[j];
    i++;
    j++;
  }
  dest[i] = '\0';
  return (dest);
}