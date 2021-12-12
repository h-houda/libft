#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	
	node = (t_list*) malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->content = content;
	return (node);
}
