#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *list)
{
    if (!list)
        return (0);

    listint_t *runner = list;  // Pointer moves at normal speed
    listint_t *chaser = list;  // Pointer moves twice as fast

    while (chaser && chaser->next)
    {
        runner = runner->next;
        chaser = chaser->next->next;
        
        if (runner == chaser)
            return (1);  // Cycle detected
    }

    return (0);  // No cycle found
}
