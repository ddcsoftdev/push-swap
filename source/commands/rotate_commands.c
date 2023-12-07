/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_commands.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:05:00 by ddemarco          #+#    #+#             */
/*   Updated: 2022/11/19 11:53:13 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	ra(void)
{
	int	num;
	int	index;
	int	size;

	num = 0;
	index = -1;
	size = g_stacks.stack_a_len;
	num = g_stacks.stack_a[0];
	while (++index < size)
		g_stacks.stack_a[index] = g_stacks.stack_a[index + 1];
	g_stacks.stack_a[size - 1] = num;
	ft_putendl_fd("ra", 1);
}

void	rb(void)
{
	int	num;
	int	index;
	int	size;

	num = 0;
	index = -1;
	size = g_stacks.stack_b_len;
	num = g_stacks.stack_b[0];
	while (++index < size)
		g_stacks.stack_b[index] = g_stacks.stack_b[index + 1];
	g_stacks.stack_b[size - 1] = num;
	ft_putendl_fd("rb", 1);
}

void	rr(void)
{
	ra();
	rb();
}
