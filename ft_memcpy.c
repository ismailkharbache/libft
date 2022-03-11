/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:35:15 by ikharbac          #+#    #+#             */
/*   Updated: 2021/11/24 22:29:12 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (!d && !s)
		return (NULL);
	while (n)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (d);
}
/*
int main()
{
    char src [7]="mohamed";
    char dest [7]="hello";
    ft_memcpy(dest,src,7);
    printf("%s\n",dest);
}
*/
