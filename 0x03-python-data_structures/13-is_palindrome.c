#include "lists.h"
#include <stdlib.h>

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to pointer to head of list
 *
 * Return:0 if it is not a palindrome, 1 if it is a palindrome
 */

 int is_palindrome(listint_t **head)
 {
     listint_t *current;
     int* dataArray;
     unsigned int i, nodes = 0;
     int start, end;

     current = *head;

     if (head == NULL)
        return (0);

     if (*head == NULL)
        return (1);

     while (current != NULL)
     {
         current = current->next;
         nodes++;
     }

     if (nodes == 1)
        return (1);

     dataArray = (int*)malloc(nodes * sizeof(int));
     current = *head;
     i = 0;
     while (current != NULL)
     {
         dataArray[i++] = current->n;
         current = current->next;
     }
     start = 0;
     end = nodes - 1;
     while (start < end)
     {
         if (dataArray[start] != dataArray[end])
            return (0);
        start++;
        end--;
     }

     return (1);
 }
