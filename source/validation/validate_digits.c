/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddemarco <ddemarco@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:03:30 by ddemarco          #+#    #+#             */
/*   Updated: 2022/12/11 10:43:53 by ddemarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../library/push_swap.h"

int	validate_digits(char *str)
{
	int	index;

	index = -1;
	while (str[++index])
	{
		if (str[index] < '0' || str[index] > '9')
		{
			if (str[index] == ' ')
				continue ;
			if (str[index] == '-' && str[index + 1] >= '0'
				&& str[index + 1] <= '9')
				continue ;
			else
				return (0);
		}
	}
	return (1);
}
