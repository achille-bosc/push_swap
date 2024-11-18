/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:16:05 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/18 02:25:56 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo(t_list **a, t_list **b)
{
	while (ft_lstsize(*a) > 1)
	{
		if (fst_sup_sec(*a) == 1)
		{
			ft_printf("sa");
			swap_a(a);
		}
		ft_printf("pb");
		push_b(a, b);
		if (fst_sup_sec(*b) == 0)
		{
			ft_printf("sb\n");
			swap_b(b);
		}
	}
	while (ft_lstsize(*b) > 0)
	{
		if (fst_sup_sec(*b) == 0)
		{
			ft_printf("sb");
			swap_a(b);
		}
		ft_printf("pa");
		push_b(b, a);
		if (fst_sup_sec(*a) == 1)
		{
			ft_printf("sb\n");
			swap_b(a);
		}
	}
}
