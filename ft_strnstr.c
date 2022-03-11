/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:49:05 by ikharbac          #+#    #+#             */
/*   Updated: 2021/11/21 19:54:38 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	int	i;

	i = 0;
	if (tofind[i] == 0)
		return ((char *)&str[i]);
	while (*str && len)
	{
		if (str[i] == tofind[i])
		{
			i++;
			len--;
			if (tofind[i] == 0)
				return ((char *)(str));
		}
		else
		{
			len = i + len;
			str++;
			i = 0;
			len--;
		}
	}
	return (0);
}
/*
int main ()
{
    char str[]="hello ::: world ";
    char tofind[]="::";
    char *p;
    p = ft_strnstr(str,tofind,8);
    printf("%s",p);
}*/