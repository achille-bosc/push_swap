/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateFunctions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegrix <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:24:28 by alegrix           #+#    #+#             */
/*   Updated: 2024/11/18 00:56:16 by alegrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rotate(t_list **lst)
{
	t_list	*new;

	if (*lst->content == NULL || *lst->next->content == NULL)
		return ;
	new->content = *lst->content;
	ft_delone(*lst, free);
	ft_addback(lst, new);
}

void	double_rotate(t_list **first, t_list **second)
{
	rotate(first);
	rotate(second);
}
