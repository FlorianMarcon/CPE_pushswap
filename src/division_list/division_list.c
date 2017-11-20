/*
** EPITECH PROJECT, 2017
** pushswhap
** File description:
** master function
*/

#include "my.h"
#include <stdlib.h>
#include "header_PUSHSWAP.h"

void    transfert(linked_list_t **lista, linked_list_t *buffer)
{
        linked_list_t *la = *lista;

        while (buffer->next != NULL)
                swap_rra(&la);
        swap_rra(&la);


}

void    division_list(linked_list_t **lista, linked_list_t **listb)
{
        linked_list_t *la = *lista;
        linked_list_t *lb = *listb;
        linked_list_t *pivot = la;

        lb->next = NULL;
        lb->data = la->data;
        la = la->next;
        *lista = la;
        while (la != NULL) {
                if (comp_str((char *)la->data, (char *)pivot->data) != 1) {
                        transfert(lista, la);
                        swap_pb(&la, &lb);
                        *lista = la;
                        *listb = lb;
                }
                else
                la = la->next;
        }
}
