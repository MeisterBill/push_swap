#include "../includes/push_swap.h"

void pa(t_pile **pile_a, t_pile **pile_b)
{
	// Vérifier s'il y a au moins un élément dans la pile b
	if (*pile_b == NULL)
	{
		return;
	}

	// Prendre le premier élément de pile_b et le mettre sur pile_a
	t_pile *temp = *pile_b;
	*pile_b = (*pile_b)->next;
	temp->next = *pile_a;
	*pile_a = temp;
}

void pb(t_pile **pile_a, t_pile **pile_b)
{
	// Vérifier s'il y a au moins un élément dans la pile a
	if (*pile_a == NULL)
	{
		return;
	}

	// Prendre le premier élément de pile_a et le mettre sur pile_b
	t_pile *temp = *pile_a;
	*pile_a = (*pile_a)->next;
	temp->next = *pile_b;
	*pile_b = temp;
}
