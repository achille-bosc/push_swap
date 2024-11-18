/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapFunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:24:04 by abosc             #+#    #+#             */
/*   Updated: 2024/11/18 23:42:06 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **lst, char x)
{
	t_list	*new;

	if (x == 'a')
		ft_printf("sa\n");
	else if (x == 'b')
		ft_printf("sb\n");
	if (ft_lstsize(*lst) < 2)
		return ;
	new = ft_lstnew((*lst)->content);
	ft_lstdelone(*lst, free);
	new->next = (*lst)->next;
	(*lst)->next = new;
}

void	double_swap(t_list **lst_a, t_list **lst_b)
{
	swap(lst_a, 'x');
	swap(lst_b, 'x');
	ft_printf("ss\n");
}
