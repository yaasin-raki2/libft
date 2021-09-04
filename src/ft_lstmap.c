#include <libft.h>

t_list *ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *temp;
	t_list *node;

	node = (*f)(lst);
	new_lst = ft_lstnew(node->content, node->content_size);
	temp = new_lst;
	while (lst->next)
	{
		lst = lst->next;
		node = (*f)(lst);
		temp->next = ft_lstnew(node->content, node->content_size);
		temp = temp->next;
	}
	return (new_lst);
}