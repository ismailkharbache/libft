/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:28:36 by ikharbac          #+#    #+#             */
/*   Updated: 2021/11/23 21:21:15 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (len)
		{
			d[len - 1] = s[len - 1];
			len --;
		}
	}
	else
	{
		ft_memcpy (d, s, len);
	}
	return (d);
}
/*
int main()
{
    char src [10]="abcedef";
    ft_memmove(src+2,src,5);
    printf("%s\n",src);
}*/