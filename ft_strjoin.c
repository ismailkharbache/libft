/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 22:00:20 by ikharbac          #+#    #+#             */
/*   Updated: 2021/11/21 20:45:25 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;

	if (s1 != NULL && s2 != NULL )
		i = (ft_strlen(s1)) + (ft_strlen(s2));
	else
		return (0);
	p = (char *)malloc(i + 1);
	if (!p)
		return (0);
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = '\0';
	return (p - i);
}
/*
int main()
{
    char str[]="hello";
    char str2[]="world";
    char *p;
    p = ft_strjoin(str,str2);
    printf("%s",p);
}*/