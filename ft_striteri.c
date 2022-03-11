/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:43:12 by ikharbac          #+#    #+#             */
/*   Updated: 2021/11/21 22:06:48 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void dycrept(unsigned int i ,char *c)
{
  i = 0;
 c[i] -= 2;
 i++;
}
int main ()
{
   int (*f)(unsigned int,char *) = &dycrept;
    char str[]="hellow world";
   ft_striteri(str,f);
    printf("%s",str);
}
*/
