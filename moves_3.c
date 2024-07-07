/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:19:42 by csouita           #+#    #+#             */
/*   Updated: 2024/07/07 20:44:45 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) > 1)
	{
		rotate(stack_a);
		ft_putstr_fd("ra\n", 1);
	}
}

void	rb(t_list **stack_b)
{
	if (ft_lstsize(*stack_b) > 1)
	{
		rotate(stack_b);
		ft_putstr_fd("rb\n", 1);
	}
}

void	sa(t_list **stack_a)
{
	if (ft_lstsize(*stack_a) > 1)
	{
		swap(stack_a);
		ft_putstr_fd("sa\n", 1);
	}
}
