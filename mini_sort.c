/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:24:03 by csouita           #+#    #+#             */
/*   Updated: 2024/07/04 21:24:47 by csouita          ###   ########.fr       */
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
int max_index(t_list *stack_a,int max)
{
    int i = 0;
    while(stack_a)
    {
        if(stack_a->content == max)
            break;
        i++;
        stack_a = stack_a->next;
    }    
    return i;
}

void sort_four(t_list **stack_a, t_list **stack_b)
{
    while(ft_lstsize(*stack_a) > 3)
    {
        if(index_of_min(*stack_a) == 0)
            pb(stack_a,stack_b);
        else if (ft_lstsize(*stack_a) / 2 >= index_of_min(*stack_a))
            ra(stack_a);
        else 
            rra(stack_a);
    }
    sort_three(stack_a);
    while(ft_lstsize(*stack_b))
        pa(stack_b,stack_a);
    free_stacks(stack_a);
    free_stacks(stack_b);
}
void sort_by_push_ab(t_list **stack_a, t_list **stack_b,int p)
{
    while((*stack_a))
    {
        if((*stack_a)->index < ft_lstsize(*stack_b))
        {
            pb(stack_a,stack_b);
            rb(stack_b);
        }
        else if ((*stack_a)->index <= ft_lstsize(*stack_b) + p)
            pb(stack_a,stack_b);
        else if (best_index(*stack_a,*stack_b,p) <= ft_lstsize(*stack_a) / 2)
            ra(stack_a);
        else
            rra(stack_a);
    }
}

void sort_by_push_ba(t_list **stack_a,t_list **stack_b)
{
    while((*stack_b))
    {
        if((*stack_b)->content == max_number(*stack_b))
            pa(stack_b,stack_a);
        else if (max_index(*stack_b,max_number(*stack_b)) <= ft_lstsize(*stack_b) / 2)
            rb(stack_b);
        else 
            rrb(stack_b);
    }
}

void sort(t_list **stack_a,t_list **stack_b,int p)
{
    
    int *array ;
    array = malloc(sizeof(int) * ft_lstsize(*stack_a));
    array = cp_to_array(stack_a);
    int i = 0;
    while(array[i])
    {
        printf("%d\n",array[i++]);
    }
    array = sort_array(array,stack_a);
    sort_by_push_ab(stack_a,stack_b,p);
    sort_by_push_ba(stack_a,stack_b);
}

void mini_sort(t_list **stack_a, t_list **stack_b, int i)
{
    int p = 30;
    if (i == 2)
    {
        if ((*stack_a)->content > (*stack_a)->next->content)
            sa(stack_a);
        free_stacks(stack_a);
        exit(0);
    }
    else if (i == 3) 
        sort_three(stack_a);
    else if(i == 4 || i == 5)
        sort_four(stack_a,stack_b);
    if(i > 5 && i < 500)
        p = 15;
    // printf("%d\n",i);
    // printf("%d\n",p);
    sort(stack_a,stack_b,p);
}