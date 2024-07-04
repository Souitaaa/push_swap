/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loot.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 23:37:51 by csouita           #+#    #+#             */
/*   Updated: 2024/07/04 21:24:37 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *cp_to_array(t_list **stack_a)
{
    int *array ;
    int i = 0;
    array = malloc(sizeof(int) * ft_lstsize(*stack_a));
    while(*stack_a)
    {
        array[i] = (*stack_a)->content;
        (*stack_a) = (*stack_a)->next;
        i++;
    }
    return array;
}
int *sort_array(int *array,t_list **stack_a)
{
    int i = 0;
    int size = ft_lstsize(*stack_a);
    printf("size === %d",size);
    int temp = 0;
    while(i < size -1)
    {
        if(array[i] > array[i + 1])
        {
            temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
            i = 0;
        }
        else 
            i++;
    }
    return array;
}
void index_of_list(t_list *stack_a,int *array)
{
    int i = 0;
    while(stack_a)
    {
        i = 0;
        while(stack_a->content != array[i])
            i++;
        stack_a->content = i;
        stack_a = stack_a->next;
    }
}
int best_index(t_list *stack_a ,t_list *stack_b, int p)
{
    int i = 0;
    while(stack_a)
    {
        if(stack_a->index <= ft_lstsize(stack_b))
            break;
        else if(stack_a->index < ft_lstsize(stack_b) + p)
            break;
        i++;
        stack_a = stack_a->next;
    }
    return i;
}