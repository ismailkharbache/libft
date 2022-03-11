/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:10:41 by ikharbac          #+#    #+#             */
/*   Updated: 2021/11/23 15:54:02 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t num)
{
	int				i;
	unsigned char	*k;

	i = 0;
	k = ptr;
	while (num)
	{
		k[i] = c;
		i++;
		num--;
	}
	return (ptr);
}
/*
int main()
{
    char str []="mohamed";
    ft_memset(str,'0',4);
    printf("%s",str);
}*/
