#include <libft.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  size_t i;
  size_t j;

  i = 0;
  if (!needle[i])
    return ((char *)haystack);
  while (haystack[i] && i < len)
  {
    j = 0;
    if (haystack[i] == needle[j])
    {
      while (haystack[i + j] && needle[j] && i + j < len && haystack[i + j] == needle[j])
        j++;
      if (!needle[j])
        return ((char *)(haystack + i));
      i += j;
    }
    i++;
  }
  return (NULL);
}