/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:58:26 by ddemarco          #+#    #+#             */
/*   Updated: 2022/11/19 11:49:29 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

int	fill_stacks(int *stack, int size)
{
	int	index;

	g_stacks.stack_b = ft_calloc(size, __SIZEOF_INT__);
	if (!g_stacks.stack_b)
		return (0);
	g_stacks.stack_b_len = 0;
	g_stacks.stack_a = ft_calloc(size, __SIZEOF_INT__);
	if (!g_stacks.stack_a)
	{
		free(g_stacks.stack_b);
		return (0);
	}
	g_stacks.stack_a_len = size;
	index = -1;
	while (++index < size)
		g_stacks.stack_a[index] = stack[index];
	return (1);
}
