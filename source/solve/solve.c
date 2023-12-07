/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:46:23 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/11 10:58:22 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

int	check_if_sorted(void)
{
	int	index;

	index = 0;
	while (++index < g_stacks.stack_a_len)
	{
		if (g_stacks.stack_a[index - 1] > g_stacks.stack_a[index])
			return (0);
	}
	return (1);
}

void	solve_stack(void)
{
	if (check_if_sorted())
		return ;
	if (g_stacks.stack_a_len == SHORTEST_LIST)
	{
		if (g_stacks.stack_a[0] > g_stacks.stack_a[1])
			sa();
	}
	else if (g_stacks.stack_a_len == SHORT_LIST)
		solve_short();
	else if (g_stacks.stack_a_len <= MED_LIST)
		solve_medium();
	else
		solve_long();
}
