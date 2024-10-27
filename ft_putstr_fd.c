// HEADER

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "on va ecrire cela";
	ft_putstr_fd(s, 1);
	return 0;
}
*/
