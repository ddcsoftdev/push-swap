/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_medium.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:35:48 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/10 17:57:37 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	get_smallest_num(int *index, int location, int min, int *size)
{
	while (*index >= 0)
	{
		if (g_stacks.stack_a[0] == min)
		{
			pb();
			*size = *size + 1;
			break ;
		}
		if (location <= (g_stacks.stack_a_len / 2))
			ra();
		else
			rra();
		*index = *index - 1;
	}
}

void	resolve_list(void)
{
	solve_short();
	while (g_stacks.stack_b_len > 0)
		pa();
}

void	solve_medium(void)
{
	int	index;
	int	min;
	int	size;
	int	location;

	size = 0;
	location = 0;
	while (size < (g_stacks.stack_a_len / 2))
	{
		index = -1;
		min = g_stacks.stack_a[0];
		while (++index < g_stacks.stack_a_len)
		{
			if (g_stacks.stack_a[index] < min)
			{
				min = g_stacks.stack_a[index];
				location = index + 1;
			}
		}
		get_smallest_num(&index, location, min, &size);
	}
	resolve_list();
}
