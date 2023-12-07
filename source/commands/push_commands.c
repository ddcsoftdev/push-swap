/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:02:00 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/10 17:54:17 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	pa(void)
{
	int	index;

	index = g_stacks.stack_a_len;
	while (index >= 0)
	{
		if (index == 0)
			g_stacks.stack_a[index] = g_stacks.stack_b[0];
		else
			g_stacks.stack_a[index] = g_stacks.stack_a[index - 1];
		index--;
	}
	g_stacks.stack_a_len++;
	index = -1;
	while (++index < g_stacks.stack_b_len)
		g_stacks.stack_b[index] = g_stacks.stack_b[index + 1];
	g_stacks.stack_b[index] = 0;
	g_stacks.stack_b_len--;
	ft_putendl_fd("pa", 1);
}

void	pb(void)
{
	int	index;

	index = g_stacks.stack_b_len;
	while (index >= 0)
	{
		if (index == 0)
			g_stacks.stack_b[index] = g_stacks.stack_a[0];
		else
			g_stacks.stack_b[index] = g_stacks.stack_b[index - 1];
		index--;
	}
	g_stacks.stack_b_len++;
	index = -1;
	while (++index < g_stacks.stack_a_len)
		g_stacks.stack_a[index] = g_stacks.stack_a[index + 1];
	g_stacks.stack_a[index] = 0;
	g_stacks.stack_a_len--;
	ft_putendl_fd("pb", 1);
}
