/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabiner <rabiner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:31:51 by rabiner           #+#    #+#             */
/*   Updated: 2024/10/13 19:25:33 by rabiner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	i;

	i = 0;
	res = malloc(size * count);
	if (!res)
		return (0);
	while (i < count)
	{
		((int *)res)[i] = 0;
		i++;
	}
	((int *)res)[count] = 0;
	return (res);
}

int	main(void)
{
	char	*src1;
	char	*src2;
	size_t	count = 12;
	size_t	size = sizeof(int);
	size_t	i = 0;

	src1 = calloc(count, size);
	src2 = ft_calloc(count, size);
	printf("v:\n");
//	while (i < count)
//		printf("%i", src1[i++]);
//	printf("\n");
	i = 0;
	printf("t:\n");
	//while (i < count)
	//	printf("%i", src2[i++]);
	//printf("\n\n");
//	free(src1);
//	free(src2);
	return 0;
}

//cc -Wall -Wextra -Werror -fsanitize=address ft_calloc.c