/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 00:08:05 by csouita           #+#    #+#             */
/*   Updated: 2024/07/08 00:14:48 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
#define PUSH_SWAP_BONUS_H

typedef struct list
{
	int			content;
	struct list	*next;
	int			index;
}				t_list;

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#endif