/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanuman <dhanuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:40:07 by dhanuman          #+#    #+#             */
/*   Updated: 2023/04/04 13:15:08 by dhanuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

//NON FUNCTIONAL
int	ft_atoi(char *str)
{
	int i;
	int res;
	int s;

	i = 0;
	s = 1;
	res = 0;

	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
        if (str[i] == '-')
		    s *= -1;
        else
            res = (str[i] - '0') + (res * 10);
        i++;

	}
	return (res * s);
}
/*
int	main(void)
{
int	val;
int	val2;
char str[20] = "  	--12345678abc";

val = atoi(str);

printf("ORIGINAL FUNCTION: %d", val);

val2 =ft_atoi(str);

printf("\nMY FUNCTION: %d", val);
}
*/