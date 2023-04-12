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
    unsigned int    i;
    unsigned int    len;

    i = 0;
    len = 0;
    if (dst == NULL || src == NULL)
        return (0);
    while (src[len] != '\0')
        len++;
    while (src[i] != '\0' && i < (size - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}

/*
int main(void)
{
  char  *src = "Hello World";
  char  dest[20];
  
  //strlcpy(dest, src, sizeof(src));
  //printf("ORGIGINAL FUN: %s", dest);
  
  ft_strlcpy(dest, src, sizeof(src));
  printf("MY FUN: %s", dest);
  
  int s = sizeof(src);
  printf("SIZE OF SRC %d", s);
  
  return(0);
  
}
*/