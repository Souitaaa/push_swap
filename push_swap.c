/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:18:37 by csouita           #+#    #+#             */
/*   Updated: 2024/07/03 13:51:45 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char *av[])
{
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;

    int i ;
    i = 0 ;
    if (ac == 1)
        exit(0);
    fill_up_stack_a(ac,av,&stack_a);
    i = ft_lstsize(stack_a);
    if (i == 1)
        (free_stacks(&stack_a)),exit(0);
    is_sorted(&stack_a);
    mini_sort(&stack_a ,&stack_b ,i);
    return 0;
}
