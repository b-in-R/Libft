

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_last;

	if (!*lst)
		*lst = new;
	else
	{
		lst_last = ft_lstlast(*lst);
		lst_last->next = new;
	}
}
