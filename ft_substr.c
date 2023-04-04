/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanuman <dhanuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:23:33 by dhanuman          #+#    #+#             */
/*   Updated: 2023/04/04 13:43:19 by dhanuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//NON Funtional

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char	str;
	
	i = start;
	str = (char *) malloc(3);

	while (s[start] != '\0' && start < len)
	{
		s[i] = str[i];
		start++;
	}
	
	return (str);
}