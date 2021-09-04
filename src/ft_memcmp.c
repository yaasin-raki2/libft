#include <libft.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  size_t i;

  i = 0;
  while (i < n && *(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i))
    i++;
  printf("\nPSSS %d\n", *(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
  return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}