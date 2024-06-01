/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:16:08 by csouita           #+#    #+#             */
/*   Updated: 2024/06/01 18:30:33 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char    *ft_strjoin(char *s1, char *s2)
{
        char    *str;
        size_t  ls1;
        size_t  ls2;

        if (!s1)
                return s2;
        if (!s2)
                return s1;
        ls1 = ft_strlen(s1);
        ls2 = ft_strlen(s2);
        str = malloc(sizeof(char) * (ls1 + ls2) + 2);
        if (!str)
                return (NULL);
        ft_memcpy(str, s1, ls1);
        ft_memcpy((str + ls1), s2, ls2);
        str[ls1 + ls2] = ' ';
        str[ls1 + ls2 + 1] = '\0';
        return (str);
} 

