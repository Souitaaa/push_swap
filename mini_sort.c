/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:24:03 by csouita           #+#    #+#             */
/*   Updated: 2024/06/23 22:29:16 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_three(t_list **stack_a)
{
    int max = max_number(*stack_a);
        if (max == (*stack_a)->content)
            ra(stack_a);
        else if(max == (*stack_a)->next->content)
            rra(stack_a);
        if((*stack_a)->content > (*stack_a)->next->content)
            sa(stack_a);
}

void mini_sort(t_list **stack_a, t_list **stack_b, int i)
{
    (void)stack_b;
    if (i == 2)
    {
        if ((*stack_a)->content > (*stack_a)->next->content)
            sa(stack_a);
        free_stacks(stack_a);
        exit(0);
    }
    else if (i == 3) 
    {
        sort_three(stack_a);
    }
    else if
}