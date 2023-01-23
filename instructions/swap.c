#include "../includes/push_swap.h"

void sa(t_pile **pile)
{
	if (*pile != NULL && (*pile)->next != NULL)
	{
		// Échanger les deux premiers éléments de la pile
		t_pile *temp = (*pile)->next;
		(*pile)->next = temp->next;
		temp->next = *pile;
		*pile = temp;
	}
}

void sb(t_pile **pile)
{
	if (*pile != NULL && (*pile)->next != NULL)
	{
		// Échanger les deux premiers éléments de la pile
		t_pile *temp = (*pile)->next;
		(*pile)->next = temp->next;
		temp->next = *pile;
		*pile = temp;
	}
}

void ss(t_pile **pile_a, t_pile **pile_b)
{
	sa(pile_a);
	sb(pile_b);
}
