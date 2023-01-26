#include "includes/push_swap.h"

int	ft_strtoi(const char *str)
{
	long	nb;
	int		sign;

	sign = 1;
	nb = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb = nb * 10 + *str - 48;
		if (nb * sign > 2147483647)
			return (-1);
		if (nb * sign < -2147483648)
			return (0);
		str++;
	}
	return (nb * sign);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void free_stack(t_pile **pile)
{
	t_pile *tmp;

	if (!pile || !(*pile))
		return;
	while (*pile)
	{
		tmp = (*pile)->next;
		free(*pile);
		*pile = tmp;
	}
	*pile = NULL;
}

void exit_error(t_pile **pile_a, t_pile **pile_b)
{
	if (pile_a == NULL || *pile_a != NULL)
		free_stack(pile_a);
	if (pile_b == NULL || *pile_b != NULL)
		free_stack(pile_b);
	write(2, "Error\n", 6);
	exit(1);
}
