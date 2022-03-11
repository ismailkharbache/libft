/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:43:50 by ikharbac          #+#    #+#             */
/*   Updated: 2021/11/21 19:45:05 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (!dstsize)
	{
		return (ft_strlen(src));
	}
	while (src[i] != '\0' && (dstsize - 1))
	{
		dest[i] = src[i];
		i++;
		dstsize--;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
/*
int main ()
{
    char str[]="hello world";
    char dst[12];
    printf("%ld",ft_strlcpy(dst,str,13));
    printf("%s",dst);
}
*/