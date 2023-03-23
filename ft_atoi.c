/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanuman <dhanuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:40:07 by dhanuman          #+#    #+#             */
/*   Updated: 2023/03/09 17:54:46 by dhanuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//NON FUNCTIONAL
/*
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
*/