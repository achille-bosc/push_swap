/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateFunctions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:24:28 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/18 02:52:10 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **lst, char x)
{
	t_list	*new;

	if (x == 'a')
		ft_printf("ra\n");
	else if (x == 'b')
		ft_printf("rb\n");
	if (ft_lstsize <= 1)
		return ;
	new = ft_lstnew(*lst)->content;
	ft_delone(*lst, free);
	ft_addback(lst, new);
}

void	double_rotate(t_list **first, t_list **second)
{
	ft_printf("rr\n");
	rotate(first, 'x');
	rotate(second, 'x');
}
