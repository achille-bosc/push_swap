/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushFunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:33:56 by abosc             #+#    #+#             */
/*   Updated: 2024/11/18 00:38:45 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **first, t_list **second)
{
	t_list	*new_m;

	new_m->content = *first->content;
	ft_delone(*first, free);
	ft_lstadd_front(second, new_m);
}
