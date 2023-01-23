#include "../includes/push_swap.h"

void rra(t_pile **pile)
{
	if (*pile != NULL && (*pile)->next != NULL)
	{
		// Trouver le dernier élément de la pile
		t_pile *p = *pile;
		while (p->next->next != NULL)
		{
			p = p->next;
		}

		// Déplacer le dernier élément de la pile vers le début
		t_pile *temp = p->next;
		p->next = NULL;
		temp->next = *pile;
		*pile = temp;
	}
}

void rrb(t_pile **pile)
{
	if (*pile != NULL && (*pile)->next != NULL)
	{
		// Trouver le dernier élément de la pile
		t_pile *p = *pile;
		while (p->next->next != NULL)
		{
			p = p->next;
		}

		// Déplacer le dernier élément de la pile vers le début
		t_pile *temp = p->next;
		p->next = NULL;
		temp->next = *pile;
		*pile = temp;
	}
}

void rrr(t_pile **pile_a, t_pile **pile_b)
{
	rra(pile_a);
	rrb(pile_b);
}
