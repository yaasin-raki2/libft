#include <libft.h>

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
  if (!*alst)
    return;
  ft_lstdel(&(*alst)->next, del);
  (*del)((*alst)->content, (*alst)->content_size);
  free(*alst);
  *alst = NULL;
}