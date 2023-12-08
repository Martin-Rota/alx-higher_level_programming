#include  "lists.h"

/**
 * check_cycle - function that checks if a list  is cyclic
 * @list: linked list
 * Return: 1 cyclic,0 otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *fast, *slow;

	if (!list || !list->next)
		return (0);
	fast = list->next->next;
	slow = list;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
		return (1);
		}
	}
	return (0);
}
