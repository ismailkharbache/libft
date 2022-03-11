/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 10:50:29 by ikharbac          #+#    #+#             */
/*   Updated: 2021/11/12 11:09:06 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned const char	*s1;
	unsigned const char	*s2;
	int					i;

	s1 = (unsigned const char *)str1;
	s2 = (unsigned const char *)str2;
	i = 0;
	while (n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
		n--;
	}
	return (0);
}
/*
int main()
{
    char str[]="heosf";
    char str2[]="hello";
   
    printf("%d", ft_memcmp(str,str2,5));
}*/