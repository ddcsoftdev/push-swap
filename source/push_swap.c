/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:08:39 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/12 00:30:50 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../library/push_swap.h"

int	main(int argc, char **argv)
{
	char	*str;

	str = process_input(argc, argv);
	if (!str)
		error_handle();
	if (!create_stacks(str))
	{
		free(str);
		error_handle();
	}
	solve_stack();
	return (0);
}
