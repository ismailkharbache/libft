/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:34:15 by ikharbac          #+#    #+#             */
/*   Updated: 2021/11/12 18:53:05 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	p = malloc(count * size);
	if (!p)
	{
		return (0);
	}
	ft_bzero (p, count * size);
	return (p);
}
/*int main()
{
    char *p;
    p = (char *)ft_calloc(sizeof(int),4);
    p[0]=1;
    printf("%s",p[1]);
}*/