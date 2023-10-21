#include "lists.h"
/**
 * print - ....
 * @h: ......
 * @i: ....
 * Return: .......
 */
size_t print(const list_t *h, int i)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	i++;
	if (h->next == NULL)
		return (i);
	else
		return (print(h->next, i));
}
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list
 * Return: number of node.
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	i++;
	if (h->next == NULL)
		return (i);
	else
		return (print(h->next, i));
}
