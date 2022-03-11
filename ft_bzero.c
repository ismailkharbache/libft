/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:49:40 by ikharbac          #+#    #+#             */
/*   Updated: 2021/11/23 17:18:13 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t num)
{
	size_t			i;
	char			*k;

	i = 0;
	k = ptr;
	while (num)
	{
		k[i] = 0;
		i++;
		num--;
	}
}
/*
int main()
{
    char str []="mohamed";
    ft_bzero(str,3);
    printf("%s",str+3);
}*/