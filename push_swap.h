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

#endif