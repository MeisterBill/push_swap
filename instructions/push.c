#include "../includes/push_swap.h"

void	pushh(t_pile **src, t_pile **dst)
{
	t_pile	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
}

void	pa(t_pile **pile_a, t_pile **pile_b)
{
	pushh(pile_b, pile_a);
	ft_putstr("pa\n");
}

void pb(t_pile **pile_a, t_pile **pile_b)
{
	pushh(pile_a, pile_b);
	ft_putstr("pb\n");
}
