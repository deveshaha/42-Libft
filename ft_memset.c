/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanuman <dhanuman@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:56:40 by dhanuman          #+#    #+#             */
/*   Updated: 2023/03/09 19:33:11 by dhanuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

/*

int main(void)
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
	printf("Original function:");
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    memset(str, '.', 8);
  
    printf("After memset():  %s", str);

	printf("\n\nMy function:");
	printf("\nBefore memset(): %s\n", str);

	ft_memset(str, '.', 8);

	printf("After memset():  %s", str);
	

	//TEST 2:
    int n = 10;
    int arr[n];
  
    // Fill whole array with 0.
	printf("\nOriginal function:");
    memset(arr, 0, n*sizeof(arr[0]));
    printf("\nArray after memset()\n");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	printf("\n\nMy function:");
	ft_memset(arr, 0, n*sizeof(arr[0]));
	printf("\nArray after memset()\n");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

    return (0);
}

*/