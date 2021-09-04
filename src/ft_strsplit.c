#include <libft.h>

int count_words(char const *s, char c)
{
  int words;
  int i;

  i = 0;
  words = 0;
  while (s[i])
  {
    while (s[i] == c && s[i])
      i++;
    if (i)
    {
      if (s[i])
      {
        if (s[i - 1] == c)
          words++;
      }
    }
    else
      words++;
    i++;
  }
  return (words);
}

char **ft_strsplit(char const *s, char c)
{
  int words;
  int wlen;
  int i;
  int j;
  char **arr;

  words = count_words(s, c);
  arr = (char **)malloc(sizeof(char *) * (words + 1));
  if (!arr)
    return (NULL);
  i = -1;
  j = 0;
  while (++i < words)
  {
    while (s[j] && s[j] == c)
      j++;
    wlen = 0;
    while (s[j + wlen] && s[j + wlen] != c)
      wlen++;
    arr[i] = ft_strnew(wlen + 1);
    if (!arr[i])
      return (NULL);
    arr[i] = ft_strsub(s, j, wlen);
    j += wlen;
  }
  arr[i] = 0;
  return (arr);
}