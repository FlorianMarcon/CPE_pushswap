/*
** EPITECH PROJECT, 2017
** header
** File description:
** pushswap
*/

#include "my.h"

#ifndef PUSHSWAP_
#define PUSHSWAP_

void	create_list(linked_list_t *la, char **ac, int size);

void	display_list(struct linked_list *list);

void	pushswap(char **av, int size);

int	comp_str(char *str1, char *str2);

void    division_list(linked_list_t **lista, linked_list_t **listb);

void	swap_la(linked_list_t **list, int flag);

void	swap_lb(linked_list_t **list);

void	swap_lc(linked_list_t **lista, linked_list_t **listb);

void	swap_pa(linked_list_t **lista, linked_list_t **listb, int flag);

void	swap_pb(linked_list_t **lista, linked_list_t **listb, int flag);

void    swap_ra(linked_list_t **listt);

void    swap_rb(linked_list_t **listt);

void    swap_rr(linked_list_t **lista, linked_list_t **listb);

void    swap_rra(linked_list_t **listt, int flag);

void    swap_rrb(linked_list_t **listt);

void    swap_rrr(linked_list_t **lista, linked_list_t **listb);

int	check_list(linked_list_t *list);

void	sort_lista(linked_list_t **lista);

void	sort_listb(linked_list_t **listb);

void	merge(linked_list_t **lista, linked_list_t **listb, int flag);

void	init_lb(linked_list_t **lista, linked_list_t **listb, int flag);

linked_list_t	*search_smaller(linked_list_t *la);

void	sort_third(linked_list_t *la, int flag);

#endif
