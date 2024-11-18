/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushFunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:33:56 by abosc             #+#    #+#             */
/*   Updated: 2024/11/18 02:51:38 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **first, t_list **second, char x)
{
	t_list	*new_m;

	if (x == 'a')
		ft_printf("pa\n");
	else
		ft_printf("pb\n");
	if (ft_lstsize(*first) == 0)
		return ;
	new_m = ft_lstnew((*first)->content);
	ft_delone(*first, free);
	ft_lstadd_front(second, new_m);
}
