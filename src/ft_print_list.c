#include <libft.h>

void ft_print_list_int(t_list *head)
{
  write(1, "List has : ", 11);
  while (head)
  {
    ft_putnbr(*(int *)(head->content));
    write(1, "-->", 3);
    head = head->next;
  }
  write(1, "NULL", 4);
}