/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:11:18 by csouita           #+#    #+#             */
/*   Updated: 2024/05/23 17:16:03 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t ft_strlen(const char *s)
{
    size_t i ;
    i = 0;
    while(s[i])
    {
        i++;
    }
    return i ;
}
int main()
{
    printf("%zu",ft_strlen("souita"));
}