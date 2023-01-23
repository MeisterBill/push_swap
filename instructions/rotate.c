#include "../includes/push_swap.h"

void ra(t_pile **pile)
{
	if (*pile != NULL && (*pile)->next != NULL)
	{
		// Déplacer le premier élément de la pile vers la fin
		t_pile *temp = *pile;
		*pile = (*pile)->next;
		temp->next = NULL;

		// Trouver le dernier élément de la pile
		t_pile *p = *pile;
		while (p->next != NULL)
		{
			p = p->next;
		}

		// Ajouter l'élément déplacé à la fin de la pile
		p->next = temp;
	}
}

void rb(t_pile **pile)
{
	if (*pile != NULL && (*pile)->next != NULL)
	{
		// Déplacer le premier élément de la pile vers la fin
		t_pile *temp = *pile;
		*pile = (*pile)->next;
		temp->next = NULL;

		// Trouver le dernier élément de la pile
		t_pile *p = *pile;
		while (p->next != NULL)
		{
			p = p->next;
		}

		// Ajouter l'élément déplacé à la fin de la pile
		p->next = temp;
	}
}

void rr(t_pile **pile_a, t_pile **pile_b)
{
	ra(pile_a);
	rb(pile_b);
}
