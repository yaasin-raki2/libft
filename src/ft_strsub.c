#include <libft.h>

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
  char *str;
  size_t i;

  str = ft_strnew(len + 1);
  if (!str)
    return (NULL);
  i = 0;
  while (s[start] && i < len)
  {
    str[i] = s[start];
    i++;
    start++;
  }
  str[i] = '\0';
  return (str);
}