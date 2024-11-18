/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmpFunctions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:21:56 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/18 02:04:44 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	fst_sup_sec(t_list *lst)
{
	int	first;
	int	second;

	if (ft_lstsize(lst) == 0)
		return (-1);
	if (ft_lstsize(lst) == 1)
		return (-2);
	first = lst->content;
	second = lst->next->content;
	if (first > second)
		return (1);
	return (0);
}
