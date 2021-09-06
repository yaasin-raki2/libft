#include <stdio.h>
#include <libft.h>

int main(void)
{
  int arr[] = {8, 1, 9, 2, 4, 7, 6, 3, 5};
  int size = sizeof(arr) / sizeof(int);
  printf("Input :\n\tarr = [ ");
  int i = 0;
  while (i < size)
    printf("%d ", arr[i++]);
  printf("] | left = %d | right = %d\nOutput :\n\tarr = [ ", 0, size - 1);
  ft_merge_sort(arr, 0, size - 1);
  i = 0;
  while (i < size)
    printf("%d ", arr[i++]);
  printf("]");
}