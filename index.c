/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:48:42 by csouita           #+#    #+#             */
/*   Updated: 2024/06/25 16:28:45 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int minimum(t_list *stack)
{
    int min = stack->content;
    while(stack)
    {
        if(stack->content < min)
            min = stack->content;
        stack = stack->next;
    }
    return min;
}

int index_of_min(t_list *stack)
{
    int i = 0;
    while(stack)
    {
        if(stack->content == minimum(stack))
            return i;
        i++;
        stack = stack->next; 
    }
    return i;
}
