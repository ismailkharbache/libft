/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <ikharbac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:06:01 by ikharbac          #+#    #+#             */
/*   Updated: 2021/11/21 21:52:15 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
/*
#include <stdio.h>
#include <stdlib.h>
int        main(void)
{
	char str [] = "nodes";
	t_list *p;
	p = ft_lstnew(((void *)str));
	printf("%s",p->content);
}
*/
