#include <libft.h>

void ft_merge(int *arr, size_t left, size_t mid, size_t right)
{
  int arr1[(mid - left) + 1];
  int arr2[right - mid];
  size_t i;
  size_t j;
  size_t k;

  i = 0;
  while (i++ < (mid - left) + 1)
    arr1[i - 1] = arr[left + i - 1];
  i = 0;
  while (i++ < right - mid)
    arr2[i - 1] = arr[mid + 1 + i - 1];
  i = 0;
  j = 0;
  k = left;
  while (k <= right)
  {
    if (i < (mid - left) + 1 && j < right - mid)
    {
      if (arr1[i] <= arr2[j])
        arr[k++] = arr1[i++];
      else
        arr[k++] = arr2[j++];
    }
    else if (i < (mid - left) + 1)
      arr[k++] = arr1[i++];
    else if (j < right - mid)
      arr[k++] = arr2[j++];
  }
}

void ft_merge_sort(int *arr, size_t left, size_t right)
{
  int mid;

  if (left >= right)
    return;
  mid = (right + left) / 2;
  ft_merge_sort(arr, left, mid);
  ft_merge_sort(arr, mid + 1, right);
  ft_merge(arr, left, mid, right);
}