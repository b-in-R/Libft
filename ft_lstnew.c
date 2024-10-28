
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*instance;

	instance = malloc(sizeof(t_list));
	if (!instance)
		return (NULL);
	instance->content = content;
	instance->next = NULL;
	return (instance);
}
/*
//test
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int		a;
	int		b;
	t_list	*instance_a;
	t_list	*instance_b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		instance_a = ft_lstnew(&a);
		printf("instance_a->content = %d\n", *(int *)instance_a->content);
		instance_b = ft_lstnew(&b);
		printf("instance_b->content = %d\n", *(int *)instance_b->content);
		printf("next instance = %p\n", (void *)instance_b->next);
	}
	else
	{
		printf("enter two numbers as args to be tested (with atoi)");
		return (-1);
	}
	return(0);
}
*/
