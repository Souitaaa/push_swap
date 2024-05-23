/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:04:13 by csouita           #+#    #+#             */
/*   Updated: 2024/05/23 20:42:26 by csouita          ###   ########.fr       */
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
            return (ft_putstr_fd("Error\n", 2), -2147483649);
    }
    while (str[i] >= 0 && str[i] <= 9 && str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    if (res * sig > 2147483647 || res * sig < -2147483648 || ft_strlen(str[i] >= 11))
        return (ft_putstr_fd("Error\n", 2), -2147483649);
    if (str[i] || str[i - 1] == '-' || str[i - 1] == '+')
        return (ft_putstr_fd("Error\n", 2), -2147483649);
    return (sig * res);
}
int check_spaces(char *av)
{
    int i;
    i = 0;
    while (av == ' ')
        i++;
    if (av == '\0')
    {
        ft_putstr_fd("Error\n",2);
        exit(255);
    }
}