/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:43:12 by abosc             #+#    #+#             */
/*   Updated: 2024/11/18 02:07:46 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_error_args(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	
}

int	main(int argc, char **argv)
{
	if (is_error_args(argc, argv))
		return (0);
}
