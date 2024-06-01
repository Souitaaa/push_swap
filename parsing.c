/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:04:13 by csouita           #+#    #+#             */
/*   Updated: 2024/06/01 18:33:11 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
long ft_atoi(char *str)
{
    long res = 0;
    int i = 0;
    int sig = 1;
    
    while (str[i] == 32 && str[i])
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i++] == '-')
            sig = -1;
        if (str[i] == '-' || str[i] == '+')
            return (ft_putstr_fd("Error1\n", 2), -2147483649);
    }
    while (str[i] >= '0' && str[i] <= '9' && str[i])
        res = res * 10 + str[i++] - '0';
    if (res * sig > 2147483647 || res * sig < -2147483648 || ft_strlen(str) > 11)
        return (ft_putstr_fd("Error2\n", 2), -2147483649);
    if (str[i] || str[i - 1] == '-' || str[i - 1] == '+')
        return (ft_putstr_fd("Error3\n", 2), -2147483649);
    return (sig * res);
}

int check_spaces(char *av ,t_list **stack_a ,char **strs)
{
    int i;
    i = 0;
    
    while (*av == 32)
        i++;
    if (!av)
    {
        ft_putstr_fd("Error\n",2);
        free_stacks(stack_a);
        free_strs(strs);
        exit(255);
    }
    return 0;
}

void check_doubles(t_list **stack_a ,char **strs , int num)
{
    t_list *tmp ;
    tmp = *stack_a;
    
    while(tmp)
    {
        if (tmp->content == num)
        {
            write(2,"double argument",16);
            free_stacks(stack_a);
            free_strs(strs);
            exit(1);
        }
        tmp = tmp->next;
    }
}
void is_sorted(t_list **stack_a)
{
    t_list *temp ;
    temp = *stack_a;
    while(temp->next)
    {
        if(temp->content > temp->next->content)
            return;
        temp = temp->next;
    }
    free_stacks(stack_a);
    exit(0);
}