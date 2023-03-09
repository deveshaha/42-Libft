/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanuman <dhanuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:03:32 by dhanuman          #+#    #+#             */
/*   Updated: 2023/03/09 15:36:09 by dhanuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//NON FUNCTIONAL YET
/*
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    int i;
    int len;

    i = 0;
    len = 0;
    if (dst == '\0' || src == '\0')
        return (0);
    while (src[len] != '\0')
        len++;
    while (src[i] != '\0' && i < (dstsize - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (len);
}
*/