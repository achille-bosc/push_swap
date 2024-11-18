/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmpFunctions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:21:56 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/18 22:40:42 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	fst_sup_sec(t_list *lst)
{
	t_list	first;
	t_list	second;

	if (ft_lstsize(lst) == 0)
		return (-1);
	if (ft_lstsize(lst) == 1)
		return (-2);
	first = ft_newlst(lst->content);
	second = ft_newlst(lst->next->content);
	if (first->content > second->content)
		return (1);
	return (0);
}

int	sec_sup_thd(t_list *lst)
{
	t_list	second;
	t_list	third;

	if (ft_lstsize(lst) == 0)
		return (-1);
	if (ft_lstsize(lst) == 1)
		return (-2);
	second = ft_newlst(lst->next->content);
	third = ft_newlst(lst->next->next->content);
	if (second->content > third->content)
		return (1);
	return (0);
}
