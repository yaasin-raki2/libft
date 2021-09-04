
#include <stdio.h>
#include <libft.h>

t_list *shit(t_list *elem)
{
  *(int *)(elem->content) = *(int *)(elem->content) * 2;
  return (elem);
}

int main(int ac, char **av)
{
  (void)ac;
  int n1 = ft_atoi(av[1]);
  int n2 = ft_atoi(av[2]);
  int n3 = ft_atoi(av[3]);
  printf("Input :\n\t");
  t_list *head = ft_lstnew(&n1, sizeof(n1));
  t_list *new1 = ft_lstnew(&n2, sizeof(n2));
  t_list *new2 = ft_lstnew(&n3, sizeof(n3));
  ft_lstadd(&head, new1);
  ft_lstadd(&head, new2);
  ft_print_list_int(head);
  t_list *new_head = ft_lstmap(head, &shit);
  printf("\nOutput :\n\t");
  ft_print_list_int(new_head);
}
