/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revRotateFunctions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:24:41 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/18 01:58:40 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_list **lst)
{
	t_list	*new;

	new = ft_lstnew((*lst)->content);
	ft_lstadd_front(lst, new);
	ft_lstdelone(ft_lstlast(*lst), free);
}

void	double_rr(t_list **lst_a, t_list **lst_b)
{
	reverse_rotate(lst_a);
	reverse_rotate(lst_b);
}
