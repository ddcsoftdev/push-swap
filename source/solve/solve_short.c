/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_short.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:33:44 by ddemarco          #+#    #+#             */
/*   Updated: 2022/11/19 12:41:29 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

void	solve_short(void)
{
	int	top;
	int	middle;
	int	bottom;

	top = g_stacks.stack_a[0];
	middle = g_stacks.stack_a[1];
	bottom = g_stacks.stack_a[2];
	if (top > middle && top < bottom && middle < bottom)
		sa();
	else if (top > middle && top > bottom && middle < bottom)
		ra();
	else if (top < middle && top > bottom && middle > bottom)
		rra();
	else if (top > middle && top > bottom && middle > bottom)
	{
		sa();
		rra();
	}
	else if (top < middle && top < bottom && middle > bottom)
	{
		sa();
		ra();
	}	
}
