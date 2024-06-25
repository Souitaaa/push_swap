/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_up_stack_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:53:33 by csouita           #+#    #+#             */
/*   Updated: 2024/06/24 16:23:25 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void fill_up_stack_a(int ac ,char **av,t_list **stack_a)
{
    int i = 1;
    char *str = NULL;
    char **strs = NULL;
    long num = 0;
    while (ac > i)
    {
        check_spaces(av[i],stack_a,strs);
        str = ft_strjoin(str,av[i++]);
    }
    strs = ft_split(str,' ');
    free(str);
    i = 0; 
    while(strs[i])
    {
        num = ft_atoi(strs[i++]);
            if(num == -2147483649)
                {
                    ft_putstr_fd("Error\n",2);
                    free_stacks(stack_a);
                    free_strs(strs);
                    exit(1);
                }
        check_doubles(stack_a,strs,(int)num);
        ft_lstadd_back(stack_a,ft_lstnew((int)num));
    }
    free_strs(strs);
}
