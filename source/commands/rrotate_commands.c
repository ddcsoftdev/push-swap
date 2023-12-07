/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_commands.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:07:31 by ddemarco          #+#    #+#             */
/*   Updated: 2022/11/19 11:53:35 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	rra(void)
{
	int	num;
	int	size;

	num = 0;
	size = g_stacks.stack_a_len;
	num = g_stacks.stack_a[size - 1];
	while (--size > 0)
		g_stacks.stack_a[size] = g_stacks.stack_a[size - 1];
	g_stacks.stack_a[0] = num;
	ft_putendl_fd("rra", 1);
}

void	rrb(void)
{
	int	num;
	int	size;

	num = 0;
	size = g_stacks.stack_b_len;
	num = g_stacks.stack_b[size - 1];
	while (--size > 0)
		g_stacks.stack_b[size] = g_stacks.stack_b[size - 1];
	g_stacks.stack_b[0] = num;
	ft_putendl_fd("rrb", 1);
}

void	rrr(void)
{
	rra();
	rrb();
}
