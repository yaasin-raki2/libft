#include <libft.h>

char *ft_strtrim(char const *s)
{
  char *str;
  int len;
  int i;
  int j;

  len = 0;
  i = 0;
  while (s[i])
  {
    if (s[i] != 32 && s[i] != '\n' && s[i] != '\t')
      len++;
    i++;
  }
  str = ft_strnew(len + 1);
  if (!str)
    return (NULL);
  i = 0;
  j = 0;
  while (s[i])
  {
    if (s[i] != 32 && s[i] != '\n' && s[i] != '\t')
      str[j++] = s[i];
    i++;
  }
  str[j] = '\0';
  return (str);
}