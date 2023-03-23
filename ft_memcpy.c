/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanuman <dhanuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:59:52 by dhanuman          #+#    #+#             */
/*   Updated: 2023/03/09 17:37:03 by dhanuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
//#include <libft.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

int main (void)
{
	char *src = "Hello";
	char *dst = "World";
	ft_memcpy(dst, src, 5);
	printf("%s", dst);
	return (0);
}
*/