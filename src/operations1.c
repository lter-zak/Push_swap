/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lter-zak <lter-zak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:44:01 by lter-zak          #+#    #+#             */
/*   Updated: 2022/10/14 15:27:02 by lter-zak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	cut_list_front(t_list **list)
{
	t_list	*push;
	int		num;
	push = *list;
	num = push->data;
	*list = push->next;
	//free(push);
	return (num);
}