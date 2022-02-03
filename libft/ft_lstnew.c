#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	new_node -> content = content;
	new_node -> next = (void *)0;
	return(new_node);
}
