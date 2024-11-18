/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:43:12 by abosc             #+#    #+#             */
/*   Updated: 2024/11/18 22:55:33 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_error_one_args(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	return (0);
}
int	is_error_few_args(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	return (0);
}

int	main(int argc, char **argv)
{
	// if (argc == 2)
	// 	if (is_error_one_args(argc, argv))
	// 		return (0);
	// else
	// 	if (is_error_few_args(argc, argv))
	// 		return (0);
	t_list	*lst_a;
	t_list	*lst_b;
	t_list	*temps;
	int 	value;
	lst_a = ft_lstnew(argv[1]);
	int i;
	i = 2;
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		temps = ft_lstnew(&value);
		lst_a->next = temps;
		lst_a = temps;
		i++;
	}
	algo(&lst_a, &lst_b);
	return (0);
}
