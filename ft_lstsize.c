#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	count;
	t_list			*tmp;

	count = 0;
	tmp = lst;
	while (tmp != NULL)
	{
		tmp = lst->next;
		count++;
	}
	return (count);
}
