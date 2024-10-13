#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*start;

	if (!lst || !f || !del)
		return (NULL);
	start = NULL;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&start, del);
			return (start);
		}
		ft_lstadd_back (&start, tmp);
		lst = lst->next;
	}
	return (start);
}
