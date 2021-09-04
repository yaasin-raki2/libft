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
  t_list *head = ft_lstnew(av[1], sizeof(char) * (ft_strlen(av[1]) + 1));
  printf("Input :\n\tpointer_to_address_of_node = %p | address_of_node = %p", &head, head);
  ft_lstdelone(&head, &del);
  printf("\nOutput :\n\t");
  printf("pointer_to_address_of_node = %p | address_of_node = %p", &head, head);
}