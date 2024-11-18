/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapFunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:24:04 by abosc             #+#    #+#             */
/*   Updated: 2024/11/18 01:32:58 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **lst)
{
	int		a;
	t_list	*new;

	a = (*lst)->content;
	ft_lstdelone(lst, free);
	new = ft_lstnew(a);
	new->next = (*lst)->next;
	(*lst)->next = new;
}

void	double_swap(t_list **lst_a, t_list **lst_b)
{
	swap(lst_a);
	swap(lst_b);
	ft_printf("ss");
}
