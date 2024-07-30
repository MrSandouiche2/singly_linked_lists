#include <stdio.h>
#include "list.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;	// Initialise le compteur de nœuds à 0
	const list_t *current = h; // Pointeur courant pour traverser la liste

	while (current != NULL)
	// Continue tant que le pointeur courant n'est pas NULL
	{
		if (current->str == NULL) // Si la chaîne du nœud est NULL
		{
			printf("[0] (nil)\n"); // Imprime [0] (nil)
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
			// Imprime la longueur et la chaîne
		}
		count++;				 // Incrémente le compteur de nœuds
		current = current->next; // Passe au nœud suivant
	}

	return (count);
}
