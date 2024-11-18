/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achillebosc <achillebosc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:43:12 by abosc             #+#    #+#             */
/*   Updated: 2024/11/18 16:47:52 by achillebosc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_error_one_args(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	
}
int	is_error_few_args(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		if (is_error_one_args(argc, argv))
			return (0);
	else
		if (is_error_few_args(argc, argv))
			return (0);
}
