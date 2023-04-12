/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanuman <dhanuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:53:01 by dhanuman          #+#    #+#             */
/*   Updated: 2023/03/09 12:03:19 by dhanuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t    ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned i;

	i = 0;
	
	if (dst == NULL && src == NULL)
		return (0);

	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
/*
int main(void)
{
  char  *src = "Hello World";
  char  dest[20];
  
  //strlcpy(dest, src, sizeof(src));
  //printf("ORGIGINAL FUN: %s", dest);
  
  ft_strlcpy(dest, src, 12);
  printf("MY FUN: %s", dest);
  
  int s = sizeof(src);
  printf("\nSIZE OF SRC %d", s);
  
  return(0);
  
}
*/