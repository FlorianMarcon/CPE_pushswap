/*
** EPITECH PROJECT, 2017
** header pushswap.h
** File description:
**
*/
#ifndef PUSHSWAP_
#define PUSHSWAP_

void    display(struct linked_list *tmp);

list_push_t       *my_data_in_list(char **array, int size);

void    pushswap(char **array, int size);

void    swap_list_la(struct linked_list **list1, struct linked_list **list2);

void    swap_list_lb(struct linked_list **list1, struct linked_list **list2);

void    rotate_end_la(struct linked_list **list);

void    rotate_end_lb(struct linked_list **list);

void    rotate_end_lc(struct linked_list **list1, struct linked_list **list2);

void  rotate_la(struct linked_list **list);

void  rotate_lb(struct linked_list **list);

void    rotate_lc(struct linked_list **list1, struct linked_list **list2);

void      swap_la(struct linked_list **list);

void      swap_lb(struct linked_list **list);

void    swap_lc(struct linked_list **list1, struct linked_list **list2);








#endif
