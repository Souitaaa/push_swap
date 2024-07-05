/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:24:07 by csouita           #+#    #+#             */
/*   Updated: 2024/07/05 16:21:48 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int content;
    struct list *next;
    int index ;    
}t_list;

void    ft_putstr_fd(char *s, int fd);
size_t  ft_strlen(char *s);
char    *ft_strjoin(char *s1, char *s2);
void    *ft_memcpy(void *dest, const void *src, size_t n);
char    **ft_split(char *s, char c);
int check_spaces(char *av ,t_list **stack_a ,char **strs);
long    ft_atoi(char *str);
t_list	*ft_lstnew(int content);
void fill_up_stack_a(int ac ,char **av,t_list **stack_a);
t_list	*ft_lstnew(int content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void check_doubles(t_list **stack_a ,char **strs , int num);
char    *ft_strdup(char *s1);
void free_strs(char **strs);
void free_stacks(t_list **stack);
void is_sorted(t_list **stack_a);
void	sa(t_list **stack_a);
void	rb(t_list **stack_b);
void	ra(t_list **stack_a);
void	sb(t_list **stack_b);
void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);
void	rrb(t_list **stack_b);
void	rra(t_list **stack_a);
void	swap(t_list **stack);
void	rotate(t_list **stack);
void	reverse_rotate(t_list **stack);
void mini_sort(t_list **stack_a, t_list **stack_b, int i);
int max_number(t_list *stack);
int minimum(t_list *stack);
int index_of_min(t_list *stack);
void sort_four(t_list **stack_a, t_list **stack_b);
void index_of_liste(t_list **stack_a,int *array);
int *cp_to_array(t_list *stack_a);
int *sort_array(int *array,t_list *stack_a);
void index_of_list(t_list *stack_a,int *array);
int best_index(t_list *stack_a ,t_list *stack_b, int p);
int max_index(t_list *stack_a,int max);
void sort_by_push_ba(t_list **stack_a,t_list **stack_b);
void sort_by_push_ab(t_list **stack_a, t_list **stack_b,int p);

#endif