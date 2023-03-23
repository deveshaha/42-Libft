/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanuman <dhanuman@student.42madrid.com>     +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:22:26 by dhanuman            #+#    #+#           */
/*   Updated: 2023/03/23 18:22:26 by dhanuman           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *) s + i);
		i--;
	}
	return (NULL);
}

/*
int main(void)
{
	char	*s = "\0";
	char	*res;
	res = ft_strrchr(s, 'x');
	printf("MY FUNCTION: %s", res);
	res = strrchr(s, 'l');
	printf("\nORIGINAL FUNCTION: %s", res);
	return (0);
}
*/