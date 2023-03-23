/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanuman <dhanuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:56:40 by dhanuman          #+#    #+#             */
/*   Updated: 2023/03/09 19:33:11 by dhanuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	int				l;
	unsigned char	*s;

	i = 0;
	l = len;
	s = b;
	while (s[i] != '\0' && (i < l))
	{
		s[i] = c;
		i++;
	}
	return (s);
}
