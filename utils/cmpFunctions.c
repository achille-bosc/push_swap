/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmpFunctions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:21:56 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/18 01:38:17 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	fstSupSec(t_list **lst)
{
	int	first;
	int	second;

	if ((*lst)->content == NULL || ((*lst)->next)->content)
		return ;
	first = (*lst)->content;
	second = ((*lst)->next)->content;
	if (first > second)
		return (1);
	return (0)
}
