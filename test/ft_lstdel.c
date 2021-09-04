#include <stdio.h>
#include <libft.h>

void del(void *memory, size_t size)
{
  size_t i = 0;
  unsigned char *str = (unsigned char *)memory;
  while (i < size)
    str[i++] = 0;
  free(memory);
  memory = NULL;
}

int main(int ac, char **av)
{
  (void)ac;
  int content = ft_atoi(av[1]);
  t_list *head = ft_lstnew(&content, sizeof(content));
  printf("Input :\n\tpointer_to_address_of_node = %p | address_of_node = %p", &head, head);
  ft_lstdel(&head, &del);
  printf("\nOutput :\n\t");
  printf("pointer_to_address_of_node = %p | address_of_node = %p", &head, head);
}