#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly linked list.
 * @head: Pointer to pointer of the first node of listint_t list.
 * @number: Number to be inserted into the linked list.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new;
    listint_t *current;

    current = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    /* If no linked list, insert node as the only node */
    if (current == NULL)
    {
        new->n = number;
        new->next = NULL;
        *head = new;
    }

    /* If only one node in linked list, do comparison and insert */
    else if (current->next == NULL)
    {
        if (current->n < number)
        {
            new->n = number;
            current->next = new;
            new->next = NULL;
        }
        else
        {
            new->n = current->n;
            new->next = current->next;
	    current->n = number;
            current->next = new; 
        }
    }

    /* If lots of nodes in linked list, do comparison and insert */
    else
    {
        while (current->next != NULL && current->next->n < number)
        {
            current = current->next;
        }

        new->n = number;
        new->next = current->next;
        current->next = new;
    }
    return (new);
}

