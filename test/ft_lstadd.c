#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  int n1 = ft_atoi(av[1]);
  int n2 = ft_atoi(av[2]);
  int n3 = ft_atoi(av[3]);
  printf("Input :\n\tn1 = %d | n1_size = %d", n1, sizeof(n1));
  printf("\n\tn2 = %d | n2_size = %d", n2, sizeof(n2));
  printf("\n\tn3 = %d | n3_size = %d", n3, sizeof(n3));
  t_list *head = ft_lstnew(&n1, sizeof(n1));
  t_list *new1 = ft_lstnew(&n2, sizeof(n2));
  t_list *new2 = ft_lstnew(&n3, sizeof(n3));
  ft_lstadd(&head, new1);
  ft_lstadd(&head, new2);
  printf("\nOutput :\n\t");
  ft_print_list_int(head);
}