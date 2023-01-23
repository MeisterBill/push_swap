#include "../includes/push_swap.h"

void push(t_pile **pile, int value)
{
	// Créer un nouveau noeud
	t_pile *nouveau = malloc(sizeof(t_pile));
	nouveau->value = value;
	nouveau->next = *pile;

	// Mettre à jour la tête de la pile
	*pile = nouveau;
}

void afficher(t_pile *pile)
{
	// Parcourir la pile et afficher chaque élément
	t_pile *p = pile;
	while (p != NULL)
	{
		printf("\n%d", p->value);
		p = p->next;
	}
}

void vider(t_pile **pile)
{
	// Parcourir la pile et libérer chaque noeud
	while (*pile != NULL)
	{
		t_pile *temp = *pile;
		*pile = (*pile)->next;
		free(temp);
	}
}

int main(void)
{
	// Initialiser les piles
	t_pile *pile_a = NULL;
	t_pile *pile_b = NULL;

	// Ajouter quelques éléments à la pile a
	push(&pile_a, 10);
	push(&pile_a, 38);
	push(&pile_a, 3);
	push(&pile_a, 4);
	push(&pile_a, 122);

	// Ajouter quelques éléments à la pile b
	/*
	push(&pile_b, 1);
	push(&pile_b, 2);
	push(&pile_b, 3);
	push(&pile_b, 4);
	push(&pile_b, 5);
	*/

	// Exécuter quelques opérations sur les piles
	/*
	sa(&pile_a);
	sb(&pile_b);
	ss(&pile_a, &pile_b);
	pa(&pile_a, &pile_b);
	pb(&pile_a, &pile_b);
	rr(&pile_a, &pile_b);
	rra(&pile_a);
	rrb(&pile_b);
	rrr(&pile_a, &pile_b);
	*/

	// Afficher le contenu des piles
	printf("Pile a: ");
	afficher(pile_a);
	printf("\nPile b: ");
	afficher(pile_b);
	printf("\n");

	// Nettoyer la mémoire
	vider(&pile_a);
	vider(&pile_b);

	return 0;
}
