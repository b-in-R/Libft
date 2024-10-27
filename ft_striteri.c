// HEADER
/*
#include "libft.h"

static void	ft_toupper_iteri(unsigned int i, char *c)
{
	(void)i;
	*c = ft_toupper(*c);
}
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "chevre en majuscule svp";
	printf("avant: %s\n", s);
	ft_striteri(s, ft_toupper_iteri);
	printf("apres: %s\n", s);
	return 0;
}
*/
