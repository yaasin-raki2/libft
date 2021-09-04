#include <libft.h>

char *ft_strmap(char const *s, char (*f)(char))
{
  char *str;
  int i;

  if (!s)
    return (NULL);
  str = ft_strnew(ft_strlen(s));
  if (!str)
    return (NULL);
  i = -1;
  while (s[++i])
    str[i] = f(s[i]);
  return (str);
}