/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:25:32 by csouita           #+#    #+#             */
/*   Updated: 2024/06/23 22:11:49 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	int	tmp;

	tmp = (*stack)->content;
	(*stack)->content = (*stack)->next->content;
	(*stack)->next->content = tmp;
}

void	rotate(t_list **stack)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = (*stack);
	tmp2 = (*stack)->next;
	tmp1->next = NULL; 
	*stack = tmp2;
	ft_lstadd_back(stack, tmp1);
}

void	reverse_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	last = ft_lstlast(*stack);
	tmp = *stack;
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = NULL;
	ft_lstadd_front(stack, last);
}

int max_number(t_list *stack)
{
	int max = stack->content;

	while (stack->next)
	{
		if (max < stack->next->content)
			max = stack->next->content;
		stack = stack->next;
	}
	return max;
}
