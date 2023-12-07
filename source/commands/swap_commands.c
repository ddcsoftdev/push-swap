/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:04:04 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/10 12:55:19 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	sa(void)
{
	int	num;

	num = g_stacks.stack_a[0];
	g_stacks.stack_a[0] = g_stacks.stack_a[1];
	g_stacks.stack_a[1] = num;
	ft_putendl_fd("sa", 1);
}

void	sb(void)
{
	int	num;

	num = g_stacks.stack_b[0];
	g_stacks.stack_b[0] = g_stacks.stack_b[1];
	g_stacks.stack_b[1] = num;
	ft_putendl_fd("sb", 1);
}

void	ss(void)
{
	sa();
	sb();
}
