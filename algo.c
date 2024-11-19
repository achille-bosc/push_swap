/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:16:05 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/19 02:39:16 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo(t_list **a, t_list **b)
{
	while (ft_lstsize(*a) > 1)
	{
		ft_printf("test");
		if (fst_sup_sec(*a) == 1)
			swap(a, 'a');
		ft_printf("test");
		ft_lstprint(*a);
		push(a, b, 'b');
		if (fst_sup_sec(*b) == 0)
			swap(b, 'b');
	}
	ft_printf("%d\n", ft_lstsize(*b));
	while (ft_lstsize(*b) > 1)
	{
		if (fst_sup_sec(*b) == 0)
			swap(b, 'b');
		push(b, a, 'a');
		if (fst_sup_sec(*a) == 1)
			swap(a, 'a');
	}
}
