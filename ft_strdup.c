/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 10:30:02 by ikharbac          #+#    #+#             */
/*   Updated: 2021/11/12 11:19:56 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		count;
	int		i;
	char	*p;

	i = 0;
	count = ft_strlen(s) + 1;
	p = malloc(count * sizeof(char));
	if (!p)
		return (0);
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
int main()
{
  char str[]="hello world";
  char *p;
  p = ft_strdup(str);
  printf("%s",p);
}*/