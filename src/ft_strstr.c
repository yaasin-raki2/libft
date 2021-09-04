#include <libft.h>

char *ft_strstr(const char *haystack, const char *needle)
{
  int i;
  int j;

  i = 0;
  if (!needle[i])
    return ((char *)haystack);
  while (haystack[i])
  {
    j = 0;
    if (haystack[i] == needle[j])
    {
      while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j])
        j++;
      if (!needle[j])
        return ((char *)(haystack + i));
      i += j;
    }
    i++;
  }
  return (NULL);
}