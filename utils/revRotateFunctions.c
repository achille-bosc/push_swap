/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revRotateFunctions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:24:41 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/18 01:32:08 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_a(t_list **lst)
{
	t_list	*new;
	
	new->content = ft_lstlast(*lst)->content;
	ft_lstadd_front(lst, new);
	ft_lstdelone(ft_lstlast(*lst), free);
}
