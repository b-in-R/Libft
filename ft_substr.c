/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabiner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:19:42 by rabiner           #+#    #+#             */
/*   Updated: 2024/10/14 18:29:58 by rabiner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(s);
	printf("strlen: %lu\n", l);
	if (start + len > l)//jusqua '\0' --> voir si start > l(s) renvoi pointeur (valeur null)
		return (0);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	const char		s[] = "bonjour les chevres";
	unsigned int	start = 8;
	size_t			len = 7;
	char			*res;

	res = ft_substr(s, start, len);
	printf("%s\n", res);
	free(res);
	return 0;
}
*/
