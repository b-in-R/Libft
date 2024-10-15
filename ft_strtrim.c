/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabiner <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:07:58 by rabiner           #+#    #+#             */
/*   Updated: 2024/10/15 17:08:00 by rabiner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	r;
	size_t	len_s1;
	size_t	len_set;
	char	*res;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	res = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!res)
		return (NULL);
	while (j < ft_strlen(set) && i < len_set)
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	j = 0;
	r = 0;
	while (s1[i])
	{
		if (i >= len_s1 - len_set && s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else if (i >= len_s1 - len_set && set[j] != '\0')
			j++;
		else
		{
			res[r] = s1[i];
			j = 0;
			r++;
			i++;
		}
	}
	res[r] = '\0';
	return (res);
}

int	main(void)
{
	const char	s1[] = " qqqwery.salut qwery.qwerT ";
	const char	set[] = "yrewq ";
	char		*res;

	res = ft_strtrim(s1, set);
	printf("%s\n", res);
	free(res);
	return 0;
}
