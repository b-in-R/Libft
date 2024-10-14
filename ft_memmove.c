/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabiner <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:35:44 by rabiner           #+#    #+#             */
/*   Updated: 2024/10/03 18:35:06 by rabiner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;
	size_t		i;

	i = 0;
	s = (const char *)src;
	d = (char *)dst;
	if (!dst && !src)
		return (NULL);
	if (d == s || len == 0)
		return (dst);
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(int ac, char **av)
{
	char	base[] = "1234567890";
	void	*src = (void *)base;
	void	*dst = (void *)(base + 3);
//	char	dst[] = "qwertyuiopasdf";
	size_t	len = 0;

	(void)av;

	printf("src base: %s\nDST base: %s\nlen: %zu\n", src, dst, len);

	if (ac == 2)
		printf("vrai: %s\n", memmove(dst , src, len));
	else
	{
		printf("test: %s\n", ft_memmove(((void*)0), src, len));
		return 0;
	}

	return 0;
}
*/
