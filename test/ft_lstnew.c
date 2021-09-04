#include <stdio.h>
#include <libft.h>

int main(int ac, char **av)
{
  (void)ac;
  int content = ft_atoi(av[1]);
  printf("Input :\n\tcontent = %d | content_size = %d", content, sizeof(content));
  t_list *head = ft_lstnew(&content, sizeof(content));
  printf("\nOutput :\n\t");
  ft_print_list_int(head);
}