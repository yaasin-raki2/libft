#include <libft.h>

t_list *ft_lstnew(void const *content, size_t content_size)
{
  t_list *node;

  node = (t_list *)malloc(sizeof(t_list));
  if (!node)
    return (NULL);
  if (!content)
  {
    node->content = NULL;
    node->content_size = 0;
  }
  else
  {
    node->content_size = content_size;
    node->content = (void *)malloc(content_size);
    if (!node->content)
    {
      free(node);
      return (NULL);
    }
    ft_memcpy(node->content, content, content_size);
  }
  node->next = NULL;
  return (node);
}